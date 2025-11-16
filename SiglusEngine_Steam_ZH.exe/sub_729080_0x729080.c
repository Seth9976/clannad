// 函数: sub_729080
// 地址: 0x729080
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* result = arg1
void* esi = *result

if (arg2 s>= 0)
    if (*(esi + 0x68) s< arg2)
        return result
    
    return (*(esi + 8))(result)

if (*(esi + 0x6c) == 0 || *(esi + 0x68) s>= 3)
    result = (*(esi + 8))(result)

*(esi + 0x6c) += 1
return result
