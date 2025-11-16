// 函数: sub_494860
// 地址: 0x494860
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx
int32_t var_4 = ebx
void* edi = &data_1b8c8b0

for (int32_t i = 0; i s< 0x57e40; )
    bool cond:0_1 = *(edi - 0x20) == 0
    *edi = 0
    
    if (not(cond:0_1))
        int32_t ebx_2 = *(edi - 8)
        int32_t eax = 0
        
        if (ebx_2 s> 0)
            do
                int32_t ecx_3
                int32_t edx_2
                
                if (i u<= 0x57e1c && *(i + &data_1b8c890) != 0 && eax s< *(i + &data_1b8c8a8))
                    edx_2.b = *((eax s>> 3) + *(i + &data_1b8c894))
                    ecx_3 = eax & 0x80000007
                    
                    if (ecx_3 s< 0)
                        ecx_3 = ((ecx_3 - 1) | 0xfffffff8) + 1
                
                if (i u> 0x57e1c || *(i + &data_1b8c890) == 0 || eax s>= *(i + &data_1b8c8a8)
                        || (*((ecx_3 << 2) + &data_611440) & edx_2.b) != 0)
                    *edi += 1
                
                eax += 1
            while (eax s< ebx_2)
    
    i += 0x24
    edi += 0x24
