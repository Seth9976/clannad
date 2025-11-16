// 函数: sub_4be58c
// 地址: 0x4be58c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
int32_t var_10 = arg1[0x8b]
*arg1 = &data_ac9ec0
j__free(var_10)
j__free(arg1[0x8c])
int32_t i = 0

if (arg1[0xad] != 0 && arg1[0xb0] u> 0)
    do
        void* ecx_1 = arg1[0xad][i]
        
        if (ecx_1 != 0)
            sub_46cb59(ecx_1, 1)
        
        i += 1
    while (i u< arg1[0xb0])

int32_t i_1 = 0

if (arg1[0xae] != 0 && arg1[0xaf] u> 0)
    do
        void* ecx_2 = arg1[0xae][i_1]
        
        if (ecx_2 != 0)
            sub_46e265(ecx_2, 1)
        
        i_1 += 1
    while (i_1 u< arg1[0xaf])

void* edi_1 = &arg1[0xb1]
int32_t i_3 = 0x10
int32_t i_2

do
    void* ecx_3 = *edi_1
    
    if (ecx_3 != 0)
        sub_46cb59(ecx_3, 1)
    
    *edi_1 = 0
    edi_1 += 4
    i_2 = i_3
    i_3 -= 1
while (i_2 != 1)
j__free(arg1[0xad])
j__free(arg1[0xae])
return sub_4d2b09(arg1) __tailcall
