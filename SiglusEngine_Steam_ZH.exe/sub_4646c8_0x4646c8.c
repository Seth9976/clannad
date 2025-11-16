// 函数: sub_4646c8
// 地址: 0x4646c8
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = arg1
void var_48

if (eax == arg2 || eax == arg3)
    eax = &var_48
int32_t edi
int32_t var_54 = edi
int32_t ecx = arg2
int32_t i_1 = 0xfffffffc
int32_t i

do
    int32_t j_1 = 0xfffffffc
    void* ebx_1 = eax + (i_1 << 2) + 0x10
    unimplemented  {fld st0, dword [ecx]}
    unimplemented  {fld st0, dword [ecx+0x4]}
    unimplemented  {fld st0, dword [ecx+0x8]}
    int16_t top = top - 4
    unimplemented  {fld st0, dword [ecx+0xc]}
    int32_t j
    
    do
        unimplemented  {fld st0, st3}
        unimplemented  {fmul st0, dword [edx+esi*4+0x10]}
        unimplemented  {fld st0, st3}
        unimplemented  {fmul st0, dword [edx+esi*4+0x20]}
        unimplemented  {fld st0, st3}
        unimplemented  {fmul st0, dword [edx+esi*4+0x30]}
        unimplemented  {fld st0, st3}
        unimplemented  {fmul st0, dword [edx+esi*4+0x40]}
        unimplemented  {fxch st0, st3}
        unimplemented  {fxch st0, st3}
        unimplemented  {faddp st1, st0}
        unimplemented  {faddp st1, st0}
        unimplemented  {fxch st0, st2}
        unimplemented  {fxch st0, st2}
        unimplemented  {faddp st1, st0}
        unimplemented  {faddp st1, st0}
        unimplemented  {faddp st1, st0}
        unimplemented  {faddp st1, st0}
        *ebx_1 = fconvert.s(unimplemented  {fstp dword [ebx], st0})
        unimplemented  {fstp dword [ebx], st0}
        ebx_1 += 0x10
        j = j_1
        j_1 += 1
    while (j != 0xffffffff)
    unimplemented  {ffree st3}
    unimplemented  {ffree st2}
    unimplemented  {ffree st1}
    unimplemented  {ffree st0}
    ecx += 0x10
    i = i_1
    i_1 += 1
while (i != 0xffffffff)

if (eax != arg1)
    __builtin_memcpy(arg1, eax, 0x40)

return arg1
