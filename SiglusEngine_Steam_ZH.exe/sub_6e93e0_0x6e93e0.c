// 函数: sub_6e93e0
// 地址: 0x6e93e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i = arg4
uint8_t* ebx = arg2

while (i != 0)
    int32_t edx = arg3[3]
    i -= 1
    int32_t eax = arg3[2]
    
    if (edx s< 8)
        eax = sub_6ec810(arg3, 8)
        edx = arg3[3]
    
    arg3[2] = eax << 8
    arg3[3] = edx - 8
    *ebx = (eax u>> 0x18).b
    ebx = &ebx[1]
