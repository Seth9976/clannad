// 函数: sub_4e3760
// 地址: 0x4e3760
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
HMENU result = __security_cookie ^ &__saved_ebp
HMENU result_1 = result

if (data_1af476c != 0)
    HMENU eax_1 = GetMenu(data_7027bc)
    int32_t var_120_2 = data_1332b64
    int32_t var_124_1 = data_1332b60
    void var_10c
    sub_4c84d0(&var_10c, "Full Screen Mode ( %d x %d )")
    sub_4cc060(&var_10c, 0x2790, eax_1, &var_10c, 0, data_187c518)
    int32_t var_120_3 = data_1332b64
    int32_t var_124_2 = data_1332b60
    sub_4c84d0(&var_10c, "Windowed Mode ( %d x %d )")
    sub_4cc060(&var_10c, 0x278b, eax_1, &var_10c, 1, data_187c518)
    int32_t eax_5
    int32_t edx_1
    edx_1:eax_5 = sx.q(data_1332b64)
    int32_t var_120_4 = (eax_5 - edx_1) s>> 1
    int32_t eax_9
    int32_t edx_2
    edx_2:eax_9 = sx.q(data_1332b60)
    int32_t var_124_3 = (eax_9 - edx_2) s>> 1
    sub_4c84d0(&var_10c, "50%% Windowed Mode ( %d x %d )")
    sub_4cc060(&var_10c, 0x278e, eax_1, &var_10c, 2, data_187c518)
    int32_t eax_14
    int32_t edx_3
    edx_3:eax_14 = sx.q(data_1332b64)
    int32_t eax_16
    int32_t edx_5
    edx_5:eax_16 = sx.q(data_1332b64)
    int32_t eax_20
    int32_t edx_6
    edx_6:eax_20 = sx.q(data_1332b60)
    int32_t var_120_5 = (((edx_3 & 3) + eax_14) s>> 2) + ((eax_16 - edx_5) s>> 1)
    int32_t eax_22
    int32_t edx_8
    edx_8:eax_22 = sx.q(data_1332b60)
    int32_t var_124_4 = (((edx_6 & 3) + eax_20) s>> 2) + ((eax_22 - edx_8) s>> 1)
    sub_4c84d0(&var_10c, "75%% Windowed Mode ( %d x %d )")
    sub_4cc060(&var_10c, 0x278f, eax_1, &var_10c, 3, data_187c518)
    int32_t eax_27
    int32_t edx_9
    edx_9:eax_27 = sx.q(data_1332b64)
    int32_t var_120_6 = ((eax_27 - edx_9) s>> 1) + data_1332b64
    int32_t eax_32
    int32_t edx_10
    edx_10:eax_32 = sx.q(data_1332b60)
    int32_t var_124_5 = ((eax_32 - edx_10) s>> 1) + data_1332b60
    sub_4c84d0(&var_10c, "150%% Windowed Mode ( %d x %d )")
    sub_4cc060(&var_10c, 0x278c, eax_1, &var_10c, 4, data_187c518)
    int32_t var_120_7 = data_1332b64 * 2
    int32_t var_124_6 = data_1332b60 * 2
    sub_4c84d0(&var_10c, "200%% Windowed Mode ( %d x %d )")
    sub_4cc060(&var_10c, 0x278d, eax_1, &var_10c, 5, data_187c518)
    int32_t var_120_8 = GetSystemMetrics(SM_CYSCREEN)
    int32_t var_124_7 = GetSystemMetrics(SM_CXSCREEN)
    sub_4c84d0(&var_10c, "Screen Size Mode ( %d x %d )")
    BOOL eax_48 = sub_4cc060(
        sub_4cc060(
            sub_4cc060(sub_4cc060(&var_10c, 0x2791, eax_1, &var_10c, 6, data_187c518), 0x277b, 
                eax_1, nullptr, 1, data_1af4258), 
            0x277d, eax_1, nullptr, 2, data_1af4258), 
        0x277c, eax_1, nullptr, 4, data_1af4258)
    BOOL eax_52 = sub_4cc060(
        sub_4cc060(
            sub_4cc060(sub_4cc060(eax_48, 0x277e, eax_1, nullptr, 8, data_1af4258), 0x277f, eax_1, 
                nullptr, 0x10, data_1af4258), 
            0x2781, eax_1, nullptr, 0x20, data_1af4258), 
        0x2780, eax_1, nullptr, 0x40, data_1af4258)
    BOOL eax_56 = sub_4cc060(
        sub_4cc060(
            sub_4cc060(sub_4cc060(eax_52, 0x2782, eax_1, nullptr, 0x80, data_1af4258), 0x2788, 
                eax_1, nullptr, 0x400, data_1af4258), 
            0x278a, eax_1, nullptr, 0x800, data_1af4258), 
        0x2787, eax_1, nullptr, 0x100, data_1af4258)
    BOOL eax_60 = sub_4cc060(
        sub_4cc060(
            sub_4cc060(sub_4cc060(eax_56, 0x2789, eax_1, nullptr, 0x200, data_1af4258), 0x2783, 
                eax_1, nullptr, 0xf4243, data_1af4258), 
            0x2785, eax_1, nullptr, 0xf4242, data_1af4258), 
        0x2784, eax_1, nullptr, 0xf4241, data_1af4258)
    BOOL eax_64 = sub_4cc060(
        sub_4cc060(
            sub_4cc060(sub_4cc060(eax_60, 0x2786, eax_1, nullptr, 0xf4240, data_1af4258), 0x276e, 
                eax_1, nullptr, 0, data_1c04444), 
            0x276d, eax_1, nullptr, 1, data_1c04444), 
        0x2760, eax_1, nullptr, 0, data_1c04440)
    BOOL eax_68 = sub_4cc060(
        sub_4cc060(
            sub_4cc060(sub_4cc060(eax_64, 0x2761, eax_1, nullptr, 1, data_1c04440), 0x2762, eax_1, 
                nullptr, 2, data_1c04440), 
            0x2763, eax_1, nullptr, 3, data_1c04440), 
        0x2764, eax_1, nullptr, 4, data_1c04440)
    BOOL eax_72 = sub_4cc060(
        sub_4cc060(
            sub_4cc060(sub_4cc060(eax_68, 0x2765, eax_1, nullptr, 5, data_1c04440), 0x2766, eax_1, 
                nullptr, 6, data_1c04440), 
            0x2767, eax_1, nullptr, 7, data_1c04440), 
        0x2768, eax_1, nullptr, 8, data_1c04440)
    sub_4cc060(
        sub_4cc060(
            sub_4cc060(sub_4cc060(eax_72, 0x2769, eax_1, nullptr, 9, data_1c04440), 0x276a, eax_1, 
                nullptr, 0xa, data_1c04440), 
            0x276b, eax_1, nullptr, 0xb, data_1c04440), 
        0x276c, eax_1, nullptr, 0xc, data_1c04440)
    result = sub_45c820()
    
    if (arg1 != 0)
        result = DrawMenuBar(data_7027bc)

sub_5f02dd(result_1 ^ &__saved_ebp)
return result
