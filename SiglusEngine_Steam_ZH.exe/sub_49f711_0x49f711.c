// 函数: sub_49f711
// 地址: 0x49f711
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

bool cond:0 = arg1[4] == 0
int32_t edi
int32_t var_c = edi
*arg1 = &data_ac8ac4

if (not(cond:0))
    int32_t i = 0
    
    if (arg1[1] u> 0)
        do
            int32_t ecx = arg1[4][i]
            
            if (ecx != 0)
                sub_49f1f2(ecx, 1)
            
            i += 1
        while (i u< arg1[1])
    
    j__free(arg1[4])

if (arg1[5] != 0)
    int32_t i_1 = 0
    
    if (arg1[2] u> 0)
        do
            void* ecx_2 = arg1[5][i_1]
            
            if (ecx_2 != 0)
                sub_46e265(ecx_2, 1)
            
            i_1 += 1
        while (i_1 u< arg1[2])
    
    j__free(arg1[5])

if (arg1[6] == 0)
    return 

int32_t i_2 = 0

if (arg1[3] u> 0)
    do
        void* ecx_4 = arg1[6][i_2]
        
        if (ecx_4 != 0)
            sub_46cb59(ecx_4, 1)
        
        i_2 += 1
    while (i_2 u< arg1[3])

j__free(arg1[6])
