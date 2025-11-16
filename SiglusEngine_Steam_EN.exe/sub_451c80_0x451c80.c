// 函数: sub_451c80
// 地址: 0x451c80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

RECT rect
int32_t result = __security_cookie ^ &rect
int32_t result_1 = result

if (data_1374758 != 0)
    char* var_8c_1 = &data_1af17d0
    char var_78[0x6c]
    sub_4c84d0(&var_78, "%s.sav")
    data_1313110 = 0x612c
    data_1313114 = 0x2712
    GetLocalTime(&data_1313118)
    sub_4cfd70(0x1313128, "AVG_SYSTEM_SAVE")
    sub_4d7170(0x13131a8)
    
    if (IsIconic(data_7027bc) == 0)
        GetWindowRect(data_7027bc, &rect)
        data_1313264 = rect.left
        data_1313268 = rect.top
    
    result = sub_495f70(sub_55a070(), &data_1313110, &var_78, 0x612c)
    
    if (result.b == 0)
        result = sub_495f70(Sleep(0x1f4), &data_1313110, &var_78, 0x612c)

sub_5f02dd(result_1 ^ &rect)
return result
