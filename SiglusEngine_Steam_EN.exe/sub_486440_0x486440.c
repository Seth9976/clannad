// 函数: sub_486440
// 地址: 0x486440
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

bool cond:0 = arg3 != 0
data_13701dc = 1
arg3.b = 1
char* result

if (cond:0)
    sub_420350(arg3)
    int32_t ecx_2 = data_907ef8
    
    if (data_907ef4 == 0)
        ecx_2 = data_1313290
    
    data_13125b4 = 1
    
    if (ecx_2 s< 0 || ecx_2 s>= 8)
        ecx_2 = 0
    else if (ecx_2 != 0 && *(ecx_2 * 0x1fc + 0x12999fc) == 0)
        ecx_2 = 0
    
    sub_420cd0(ecx_2)
    sub_422290(data_13132b0, data_13132b4)
    sub_422630()
    result = sub_48d040(data_71929c, &data_7192a0)
    data_71929c = 0x24
    data_703008 = 1
else
    char eax = data_13740a8
    data_1ff4cb4 = 0
    
    if (arg2 != 0)
        eax = 1
    
    data_13740a8 = eax
    int32_t eax_1 = data_1b144c8
    
    if (arg4 != 0)
        eax_1 = 1
    
    bool cond:4_1 = data_1370334 != 0
    data_1b144c8 = eax_1
    int32_t eax_2 = data_1af17c0
    
    if (cond:4_1)
        eax_2 = 1
    
    data_1af17c0 = eax_2
    int32_t eax_3 = sub_5809f0(arg3.b)
    data_1311170 = 1
    data_13740f0 = 0
    sub_460c30(eax_3, 1, 0, 1, 1)
    result = sub_48d040(data_71929c, &data_7192a0)
    data_71929c = 0x22
    data_703008 = 1

data_7192e0 = 0
data_7192a0 = 0
return result
