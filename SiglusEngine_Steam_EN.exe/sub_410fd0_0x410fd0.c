// 函数: sub_410fd0
// 地址: 0x410fd0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edx
int32_t var_14 = edx
int32_t var_18 = (&data_610580)[arg1]
char* result = sub_4c84d0(&data_7027c0, 0x6104ec)

if (data_702fc0 != 0)
    sub_55f390(
        sub_55f1e0(sub_55ef70(result, data_72d6ac, data_719b6c, &data_7027c0, 0x61051c), 
            data_72d6ac, data_719b6c, &data_7027c0, 0x61051c), 
        data_72d6ac, data_719b6c, &data_7027c0, 0x61051c)
    result = sub_4a1e40(3)

if (data_641ab0 s< 3)
    int32_t var_14_1 = edx
    int32_t var_18_1 = (&data_610580)[arg1]
    sub_4c84d0(&data_7027c0, "%s(%$d) ")
    result = MessageBoxA(data_7027bc, &data_7027c0, 0x61051c, MB_OK)
    data_641ab0 += 1

return result
