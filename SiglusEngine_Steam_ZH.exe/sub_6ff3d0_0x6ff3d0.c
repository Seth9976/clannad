// 函数: sub_6ff3d0
// 地址: 0x6ff3d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* result = arg1
int32_t* esi = result[0x12]

if (esi != 0)
    bool cond:0_1 = esi[1] != 1
    result = esi[1]
    esi[1] -= 1
    
    if (not(cond:0_1))
        (*(*esi + 4))()
        result = &esi[2]
        int32_t edi_1 = *result
        *result -= 1
        
        if (edi_1 == 1)
            return (*(*esi + 8))()

return result
