// 函数: sub_46c620
// 地址: 0x46c620
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return 

int32_t eax = arg2 + (arg3 << 1)
void* edx = eax * 0x7a0
arg1 = arg4
*(eax * 0x650 + 0x72d78c) = arg1
int32_t ecx_2 = *(eax * 0x650 + 0x72d788)

if (arg1 s< 0 || arg1 s>= ecx_2)
    arg1 = ecx_2

*(edx + 0x98bfa0) = arg1

if (arg2 == 1)
    void* ecx_3 = *(edx + 0x98bf94)
    
    if (ecx_3 != 0)
        arg1 = 0
        
        if (*(edx + 0x98bf8c) s> 0)
            int32_t* ecx_4 = ecx_3 + 0x6c
            
            do
                if (arg1 s>= *(edx + 0x98bfa0))
                    *ecx_4 = 0xffffffff
                
                arg1 += 1
                ecx_4 = &ecx_4[0x6d]
            while (arg1 s< *(edx + 0x98bf8c))

*(edx + &data_98c1f8) += 1
