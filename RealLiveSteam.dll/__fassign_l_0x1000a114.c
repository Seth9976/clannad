// 函数: __fassign_l
// 地址: 0x1000a114
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

int32_t var_c = arg3
int32_t result_1
int32_t result

if (result_1 == 0)
    boost::math::tools::evaluate_rational<4,long double,long double,long double>(&result_1, arg5, 
        arg6)
    result = result_1
    *arg4 = result
else
    sub_1000be8b(&var_c, arg5, arg6)
    *arg4 = var_c
    result = arg3
    arg4[1] = result

return result
