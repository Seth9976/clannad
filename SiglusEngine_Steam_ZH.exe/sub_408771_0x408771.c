// 函数: sub_408771
// 地址: 0x408771
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0
int32_t edi
int32_t var_20 = edi

if (arg4 != 0)
    int32_t ecx = *(arg1 + 0x184)
    __builtin_memset(__builtin_memset(*(arg1 + 0x10c) * arg3 + *(arg1 + 0xcc), 0, ecx u>> 2 << 2), 
        0, ecx & 3)

if (*(arg1 + 0x188) u<= 0)
    return 

void* edi_5 = arg1 + 0x18c

do
    float var_14[0x4]
    sub_45e40f(*edi_5, arg2, &var_14, 4)
    int16_t top
    int16_t top_1 = top - 1
    unimplemented  {call 0x45e40f}
    void* eax_1 = *edi_5
    
    if (*(eax_1 + 6) == 1)
        eax_1.b = *(eax_1 + 4)
        
        if (eax_1.b u<= 2)
            uint32_t eax_2 = zx.d(eax_1.b)
            unimplemented  {fldz }
            int32_t j = 0
            
            if (eax_2 != 0xffffffff)
                do
                    unimplemented  {fld st0, st0}
                    j += 1
                    unimplemented  {fadd dword [ebp+ecx*4-0x14]}
                    unimplemented  {fstp st1, st0}
                    unimplemented  {fstp st1, st0}
                while (j u< eax_2 + 1)
            
            unimplemented  {fld1 }
            unimplemented  {fsub st0, st1}
            var_14[eax_2 + 1] = fconvert.s(unimplemented  {fstp dword [ebp+eax*4-0x10], st0})
            unimplemented  {fstp dword [ebp+eax*4-0x10], st0}
            unimplemented  {fstp st0, st0}
            unimplemented  {fstp st0, st0}
            top_1 = top_1
    
    sub_45e81f(arg1 + 0xc4, *(edi_5 + 0x104), arg3, &var_14, 4)
    top = top_1 - 1
    unimplemented  {call 0x45e81f}
    i += 1
    edi_5 += 4
while (i u< *(arg1 + 0x188))
