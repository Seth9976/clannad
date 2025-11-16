// 函数: sub_4c22b0
// 地址: 0x4c22b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_641b5c != 0)
    return 

int32_t eax = Ordinal_DSOUND_1(0, &data_641b5c, 0)

if (eax != 0)
    return 

int32_t* eax_1 = data_641b5c
int32_t eax_2 = (*(*eax_1 + 0x18))(eax_1, data_7027bc, 3)

if (eax_2 == 0)
    int32_t var_18
    sub_4d1ba0(eax_2, eax_2 + 0x14, &var_18, eax_2.b)
    int32_t* eax_3 = data_641b5c
    var_18 = eax_2 + 0x14
    int32_t var_14_1 = 1
    eax = (*(*eax_3 + 0xc))(eax_3, &var_18, &data_641b58, 0)

if (eax_2 == 0 && eax == 0)
    return 

int32_t* eax_4 = data_641b5c
(*(*eax_4 + 8))(eax_4)
data_641b5c = 0
