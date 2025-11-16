// 函数: sub_415620
// 地址: 0x415620
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s< 0 || arg3 s>= 0x20)
    arg3 = 0

data_131d2d8 = arg4
int32_t* result = arg3 * 0x10c
data_131d2d0 = arg3
data_131d2d4 = arg2
data_131d2e0 = 1

if (result[0x425ff9].b != 0)
    result = sub_415410(arg3)

int32_t* esi = data_131d304

if (esi != 0xffffffff)
label_415677:
    data_131d30c = 0xffffffff
    data_131d310 = 0xffffffff
    
    if (esi u<= 0x1ff)
        result = sub_425430(esi, 1)
        
        if (*(esi * 0x74 + 0x13747b0) != 0)
            return sub_426840(result, 0, esi * 0x74 + 0x13747b0, &data_131d30c, &data_131d310)
else
    esi = data_131d308
    
    if (esi != 0xffffffff)
        goto label_415677
    
    data_131d30c = 0
    data_131d310 = 0

return result
