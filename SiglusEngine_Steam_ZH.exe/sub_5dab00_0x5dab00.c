// 函数: sub_5dab00
// 地址: 0x5dab00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*(arg1 + 0x1c) = 0
int32_t* esi = *(arg1 + 0x20)
*(arg1 + 0x20) = 0

if (esi != 0)
    bool cond:0_1 = esi[1] != 1
    esi[1]
    esi[1] -= 1
    
    if (not(cond:0_1))
        (*(*esi + 4))()
        bool cond:2_1 = esi[2] != 1
        esi[2]
        esi[2] -= 1
        
        if (not(cond:2_1))
            (*(*esi + 8))()

*(arg1 + 0x24) = 0
int32_t* esi_1 = *(arg1 + 0x28)
*(arg1 + 0x28) = 0

if (esi_1 != 0)
    bool cond:1_1 = esi_1[1] != 1
    esi_1[1]
    esi_1[1] -= 1
    
    if (not(cond:1_1))
        (*(*esi_1 + 4))()
        int32_t ebx_1 = esi_1[2]
        esi_1[2] -= 1
        
        if (ebx_1 == 1)
            (*(*esi_1 + 8))()

return sub_6efe60(arg1 + 0x2c) __tailcall
