// 函数: sub_5c79d0
// 地址: 0x5c79d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ecx = data_b9009c
HRESULT result = 0

if (ecx == 0 || data_b900a4 == 0)
    result = std::money_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >::_Getmfld(
        &data_b90090, arg4)
    ecx = data_b9009c

int32_t edx = arg5

if (ecx != 0)
    result = (*(*ecx + 0x2c))(ecx, arg1, arg2, edx, arg6, arg7, arg8, arg9)
    edx = arg5

if (result == DISP_E_MEMBERNOTFOUND || result == TYPE_E_ELEMENTNOTFOUND)
    int32_t* ecx_1 = *(arg1 + 8)
    
    if (ecx_1 != 0)
        result = (*(*ecx_1 + 0x18))(ecx_1, arg2, arg3, arg4, edx, arg6, arg7, arg8, arg9)
        
        if (result s>= 0 && (arg5.b & 4) != 0)
            return std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::operator=(
                arg1 - 0x4c, arg2)

return result
