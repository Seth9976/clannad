// 函数: sub_69e360
// 地址: 0x69e360
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = *(arg1 + 0x28)

if (esi != 0)
    bool cond:0_1 = esi[1] != 1
    esi[1]
    esi[1] -= 1
    
    if (not(cond:0_1))
        (*(*esi + 4))()
        int32_t edi_1 = esi[2]
        esi[2] -= 1
        
        if (edi_1 == 1)
            (*(*esi + 8))()

return j__free(arg1)
