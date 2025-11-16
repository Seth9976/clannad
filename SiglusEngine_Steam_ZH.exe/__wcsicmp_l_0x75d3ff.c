// 函数: __wcsicmp_l
// 地址: 0x75d3ff
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_14
sub_7470a1(&var_14, arg3)
int16_t* ebx = arg1
int16_t* esi_1

if (ebx != 0)
    esi_1 = arg2

uint32_t result

if (ebx != 0 && esi_1 != 0)
    int16_t eax_5
    int16_t edi_1
    
    if (*(var_14 + 0xa8) != 0)
        do
            edi_1 = sub_75f275(*ebx, &var_14)
            ebx = &ebx[1]
            eax_5 = sub_75f275(*esi_1, &var_14)
            esi_1 = &esi_1[1]
            
            if (edi_1 == 0)
                break
        while (edi_1 == eax_5)
    else
        int16_t* ebx_1 = ebx - esi_1
        
        do
            int16_t eax_2 = *(ebx_1 + esi_1)
            
            if (eax_2 u< 0x41 || eax_2 u> 0x5a)
                edi_1 = eax_2
            else
                edi_1 = eax_2 + 0x20
            
            eax_5 = *esi_1
            
            if (eax_5 u>= 0x41 && eax_5 u<= 0x5a)
                eax_5 += 0x20
            
            esi_1 = &esi_1[1]
            
            if (edi_1 == 0)
                break
        while (edi_1 == eax_5)
    
    result = zx.d(edi_1) - zx.d(eax_5)
else
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0x7fffffff

char var_8
void* var_c

if (var_8 != 0)
    *(var_c + 0x70) &= 0xfffffffd
return result
