JT:                     ; Jump Table setup
    .word default
    .word caseLeft
    .word caseRight
    .word caseBack
    .word caseStraight

.global moveToy

moveToy:                ; Function to control toy movements
    mov &moveDirection, r12
    cmp #4, r12         ; Compare with the maximum direction value (e.g., 4)
    jge default         ; Jump to default case if moveDirection is invalid
    add r12, r12        ; Multiply by two to get address in jump table
    mov JT(r12), r0

caseLeft:               ; Cases to perform toy movements
    call #moveLeft
    jmp esac

caseRight:
    call #moveRight
    jmp esac

caseBack:
    call #moveBack
    jmp esac

caseStraight:
    call #moveStraight
    jmp esac

default:
    ; Handle invalid direction (optional)
    jmp esac

esac:                   ; Return point after each case
    pop r0              ; Clean up the stack
