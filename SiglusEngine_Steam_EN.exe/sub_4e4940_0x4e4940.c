// 函数: sub_4e4940
// 地址: 0x4e4940
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
BOOL eax_3
void devMode

if (data_187c520 != 0)
    int32_t esi_1 = data_1c051c4
    int32_t edi_1 = data_1c051c8
    uint32_t eax_6 = timeGetTime()
    data_1c051b4 = 0
    data_1c051b0 = 0
    
    if (eax_6 == 0)
        eax_6 = 1
    
    data_1c051ac = 0
    data_1c051b8 = eax_6
    int16_t var_88_2 = 0x9c
    int32_t var_40_1 = edi_1
    int32_t var_3c_1 = esi_1
    int32_t var_84_1 = 0x180000
    eax_3 = sub_4d53f0(sub_4d1ba0(eax_6, 0x9c, &devMode, 0), esi_1, edi_1, nullptr, 0)
else
    if (data_1c0518e != 0)
    label_4e49fd:
        int32_t eax_5 = sub_546020()
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_5
    
    _memset(&devMode, 0, 0x9c)
    int16_t var_88_1 = 0x9c
    EnumDisplaySettingsA(nullptr, ENUM_CURRENT_SETTINGS, &devMode)
    int32_t edx_1 = data_1c051d0
    int32_t var_40
    data_1bfdd24 = var_40
    eax_3 = data_1c051cc
    int32_t var_3c
    data_1b8c880 = var_3c
    
    if (edx_1 != var_40 || eax_3 != var_3c)
        int32_t ecx_1
        ecx_1.b = 1
        
        if (sub_4d5520(eax_3, edx_1, ecx_1.b, eax_3) == 0)
            goto label_4e49fd
        
        eax_3 = sub_4d4db0()
        
        if (eax_3.b != 0)
            data_1af17ca = 1
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_3
sub_5f02dd(eax_1 ^ &__saved_ebp)
return eax_3
