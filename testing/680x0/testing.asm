.680x0

main:
  illegal
  rts

  clr.l d0

blah:
  addi.w #5, d1
  dbne d1, blah

  asl.w #3, d3
  asl.b d1, d3
  asl d1

  ror.w #3, d3
  rol.b d1, d3

  lsl.w #3, d3
  lsr.b d1, d3

  pea d5
  pea a5
  pea (a5)
  pea -(a5)
  pea (a5)+

  and.w d1, a2
  and.b a2, d1
  and.l d2, d1

