// 函数: sub_4113d0
// 地址: 0x4113d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = arg1
int32_t i
i.b = arg1 == 0
int32_t result

do
    result = sub_411350(i)
    
    if (data_702fc0 != 0 && data_1af0a78 != 0)
        bool cond:0_1
        
        if (i u<= 0x10)
            cond:0_1 = data_1318520 != 2
            *((i << 2) + &data_20cc940) = 1
        label_41141e:
            
            if (not(cond:0_1))
                result = sub_563b20(0)
        else if (i == 0xffffffff)
            cond:0_1 = data_1318520 != 1
            goto label_41141e
    
    i += 1
while (i s< 0x21)

return result
