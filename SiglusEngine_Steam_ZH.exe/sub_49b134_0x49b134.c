// 函数: sub_49b134
// 地址: 0x49b134
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

bool cond:0 = arg1[5] == 0
*arg1 = &data_ac8938

if (not(cond:0))
    int32_t edi
    int32_t var_8_1 = edi
    int32_t i = 0
    
    if (arg1[6] u> 0)
        do
            void* ecx = arg1[5][i]
            
            if (ecx != 0)
                sub_49b113(ecx, 1)
            
            i += 1
        while (i u< arg1[6])
    
    j__free(arg1[5])

j__free(arg1[2])
return j__free(arg1[7])
