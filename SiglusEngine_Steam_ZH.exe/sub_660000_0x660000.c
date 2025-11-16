// 函数: sub_660000
// 地址: 0x660000
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax

if (*(data_bac458 + 0x354) == 0)
    eax.b = *(data_bac4e4 + 0x19a)

bool cond:0_1

if (*(data_bac458 + 0x354) != 0 || eax.b != 0)
    void* eax_3 = data_bac498
    
    if (*(eax_3 + 5) != 0)
        cond:0_1 = *(eax_3 + 4) == 0
    label_66004b:
        
        if (not(cond:0_1))
            return 1
else
    void* eax_1 = data_bac498
    
    if (*(eax_1 + 5) != 0 && *(eax_1 + 4) != 0)
        cond:0_1 = *(data_bac4a0 + 0x104) == 0
        goto label_66004b
return 0
