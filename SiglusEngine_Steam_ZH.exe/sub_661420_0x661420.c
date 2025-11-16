// 函数: sub_661420
// 地址: 0x661420
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = data_bac454
*(eax + 0x1c00) = 0
int32_t* esi = *(eax + 0x1c04)
*(eax + 0x1c04) = 0

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

void* result = data_bac4a0
*(result + 0x1b4) = 0
return result
