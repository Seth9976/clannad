// 函数: sub_668f50
// 地址: 0x668f50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 != 0)
    return 0x8002000b

if (arg3 == 0)
    return 0x80004003

int32_t ecx = data_b900cc
HRESULT result = 0

if (ecx == 0)
    result = std::money_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >::_Getmfld(
        &data_b900c0, arg2)
    ecx = data_b900cc

*arg3 = ecx
int32_t* ecx_1 = data_b900cc

if (ecx_1 == 0)
    return result

(*(*ecx_1 + 4))(ecx_1)
return 0
