// 函数: sub_420450
// 地址: 0x420450
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t result = 0
data_1357100 = 0
int32_t edi = data_13701cc
data_13570fc = 0
data_135702c = 0
data_1357028 = 0

if (edi != 0)
    int32_t ecx_1 = data_131270c
    
    if (ecx_1 u<= 0x3e7)
        int32_t* edi_1 = *(edi + (ecx_1 << 3) + 4)
        
        if (edi_1 != 0)
            char* ecx_2 = edi_1[2]
            
            if (ecx_2 != 0 && *ecx_2 != 0)
                sub_460100(ecx_2)
                result = data_13570fc
            
            void* esi_1 = *edi_1
            
            if (esi_1 != 0)
                int32_t i_1 = edi_1[1]
                
                if (i_1 s> 0)
                    int32_t i
                    
                    do
                        uint32_t eax = zx.d(*(esi_1 + 0xa))
                        sub_45fff0(eax, *(esi_1 + 8), zx.d(*esi_1), eax)
                        esi_1 += 0x14
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                    result = data_13570fc
            
            if (result u>= 0x19000)
                ___report_rangecheckfailure()
                noreturn
            
            (&data_1357100)[result] = 0
            data_135702c = edi_1[5]
            result = edi_1[6]
            data_1357028 = result

return result
