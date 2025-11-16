// 函数: sub_686530
// 地址: 0x686530
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_4 = arg1
bool cond:0 = arg1[5] u< 8
arg1[4] = 0
int16_t* result

if (cond:0)
    result = arg1
else
    result = *arg1

*result = 0
__builtin_memset(&arg1[6], 0, 0x20)
arg1[0xe] = 0xffffffff
arg1[0xf] = 0xffffffff
__builtin_memset(&arg1[0x10], 0, 0x14)
int32_t* esi = arg1[0x14]

if (esi != 0)
    bool cond:1_1 = esi[1] != 1
    result = esi[1]
    esi[1] -= 1
    
    if (not(cond:1_1))
        (*(*esi + 4))()
        result = &esi[2]
        int32_t edi_1 = *result
        *result -= 1
        
        if (edi_1 == 1)
            return (*(*esi + 8))()

return result
