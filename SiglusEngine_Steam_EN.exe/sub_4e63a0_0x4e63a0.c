// 函数: sub_4e63a0
// 地址: 0x4e63a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
data_1b1bd14 = 0
data_13926fc = 0x280
data_13926f8 = 0x1e0

if (sub_4469b0() == 0)
    if (sub_4d4a10(sub_4e6120(), &var_8) != 0)
        int32_t eax_3 = sub_446930()
        
        if (eax_3 == 0)
            HINSTANCE ecx_2 = data_1af4768
            data_1af413c = eax_3
            enum MESSAGEBOX_STYLE eax_4 = sub_4e6290(ecx_2)
            
            if (eax_4 != MB_OK)
                data_187a5c4 = 1
                return 1
            
            MessageBoxA(eax_4, 0x61e5f0, "Error", eax_4)
    else
        sub_446860(var_8)

return 0
