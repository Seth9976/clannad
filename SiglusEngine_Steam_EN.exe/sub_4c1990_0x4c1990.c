// 函数: sub_4c1990
// 地址: 0x4c1990
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t result = 0
int32_t* ppv = nullptr
HRESULT eax_2 = CoCreateInstance(&data_6103e8, 0, CLSCTX_INPROC_SERVER, &data_6103d8, &ppv)

if (eax_2 s>= 0)
    int32_t* ppv_1 = ppv
    int32_t* var_62c
    
    if ((**ppv_1)(ppv_1, 0x6103f8, &var_62c) s>= 0)
        wchar16 wideCharStr[0x208]
        MultiByteToWideChar(0, 0, arg2, 0xffffffff, &wideCharStr, 0x208)
        int32_t* eax_4 = var_62c
        
        if ((*(*eax_4 + 0x14))(eax_4, &wideCharStr, 0) s>= 0)
            int32_t* ppv_2 = ppv
            
            if ((*(*ppv_2 + 0x4c))(ppv_2, arg3, 2) s>= 0)
                int32_t* ppv_3 = ppv
                void string2
                
                if ((*(*ppv_3 + 0xc))(ppv_3, &string2, 0x208, 0, 0) s>= 0)
                    if (arg4 != 0)
                        lstrcpyA(arg4, &string2)
                    
                    result = 1
        
        int32_t* eax_8 = var_62c
        (*(*eax_8 + 8))(eax_8)
    
    int32_t* ppv_4 = ppv
    (*(*ppv_4 + 8))(ppv_4)

if ((eax_2 s< 0 || result == 0) && arg4 != 0)
    lstrcpyA(arg4, arg2)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
