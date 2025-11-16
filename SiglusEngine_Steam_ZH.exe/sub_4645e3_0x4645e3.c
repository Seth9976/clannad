// 函数: sub_4645e3
// 地址: 0x4645e3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_50 = edi
int16_t top

if (arg3 != arg1)
label_464669:
    int32_t ebx_1 = arg1
    int32_t ecx_1 = arg2
    int32_t i_3 = 0xfffffffc
    int32_t i
    
    do
        int32_t j_3 = 0xfffffffc
        unimplemented  {fld st0, dword [ecx]}
        unimplemented  {fld st0, dword [ecx+0x4]}
        unimplemented  {fld st0, dword [ecx+0x8]}
        top -= 4
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
            *(ebx_1 + (j_3 << 2) + 0x10) =
                fconvert.s(unimplemented  {fstp dword [ebx+esi*4+0x10], st0})
            unimplemented  {fstp dword [ebx+esi*4+0x10], st0}
            j = j_3
            j_3 += 1
        while (j != 0xffffffff)
        unimplemented  {ffree st3}
        unimplemented  {ffree st2}
        unimplemented  {ffree st1}
        unimplemented  {ffree st0}
        ecx_1 += 0x10
        ebx_1 += 0x10
        i = i_3
        i_3 += 1
    while (i != 0xffffffff)
else
    if (arg2 == arg1)
        void var_44
        __builtin_memcpy(&var_44, arg3, 0x40)
        arg3 = &var_44
        goto label_464669
    
    int32_t ebx = arg1
    int32_t i_2 = 0xfffffffc
    int32_t i_1
    
    do
        int32_t j_2 = 0xfffffff0
        unimplemented  {fld st0, dword [edx+edi*4+0x10]}
        unimplemented  {fld st0, dword [edx+edi*4+0x20]}
        unimplemented  {fld st0, dword [edx+edi*4+0x30]}
        top -= 4
        unimplemented  {fld st0, dword [edx+edi*4+0x40]}
        int32_t j_1
        
        do
            unimplemented  {fld st0, st3}
            unimplemented  {fmul st0, dword [ecx+esi*4+0x40]}
            unimplemented  {fld st0, st3}
            unimplemented  {fmul st0, dword [ecx+esi*4+0x44]}
            unimplemented  {fld st0, st3}
            unimplemented  {fmul st0, dword [ecx+esi*4+0x48]}
            unimplemented  {fld st0, st3}
            unimplemented  {fmul st0, dword [ecx+esi*4+0x4c]}
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
            *(ebx + (j_2 << 2) + 0x40) =
                fconvert.s(unimplemented  {fstp dword [ebx+esi*4+0x40], st0})
            unimplemented  {fstp dword [ebx+esi*4+0x40], st0}
            j_1 = j_2
            j_2 += 4
        while (j_1 != 0xfffffffc)
        unimplemented  {ffree st3}
        unimplemented  {ffree st2}
        unimplemented  {ffree st1}
        unimplemented  {ffree st0}
        ebx += 4
        i_1 = i_2
        i_2 += 1
    while (i_1 != 0xffffffff)
return arg1
