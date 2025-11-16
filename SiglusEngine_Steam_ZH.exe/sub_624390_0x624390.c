// 函数: sub_624390
// 地址: 0x624390
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax
eax.b = *(arg1 + 0x56c9c)

if (eax.b != 0)
label_6243c8:
    
    if (*(data_bac458 + 0x381) == 0)
        int32_t eax_3
        
        if (*(arg1 + 0x630c4) == 0)
            eax_3 = 0x80000000
        else
            eax_3 = *(data_bac510 + 0x17364)
        
        sub_5cf6f0(arg1 + 0x56b64, eax_3)
else
    if (*(arg1 + 0x4a684) == eax.b)
        sub_608cd0(*(arg1 + 0x56b34) + 0x8ec, 0x80000000)
        void* eax_1
        eax_1.b = 1
        return eax_1
    
    if (eax.b != 0)
        goto label_6243c8

if (*(arg1 + 0x630c4) != 0)
    int32_t eax_5
    
    if (*(arg1 + 0x56c9c) == 0)
        eax_5 = 0x80000000
    else
        eax_5 = *(data_bac510 + 0x17360)
    
    sub_608cd0(*(arg1 + 0x62f18) + 0x8ec, eax_5)

eax.b = 1
return eax
