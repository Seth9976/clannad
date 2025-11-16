// 函数: sub_461c58
// 地址: 0x461c58
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t edi
int32_t var_124 = edi
int32_t result

if (sub_4078b6() != 0)
    uint32_t esi_1 = (_wcslen(arg2) + 1) * 2
    int32_t eax_3 = sub_745f3f(esi_1)
    
    if (eax_3 != 0)
        int32_t esi_3
        int32_t edi_3
        edi_3, esi_3 = __builtin_memcpy(eax_3, arg2, esi_1 u>> 2 << 2)
        __builtin_memcpy(edi_3, esi_3, esi_1 & 3)
        HANDLE hObject = CreateFileW(arg2, 0x40000000, FILE_SHARE_NONE, nullptr, CREATE_ALWAYS, 
            0x8000080, nullptr)
        
        if (hObject != 0xffffffff)
            void*** eax_4 = sub_745f3f(0x60)
            void*** esi_5
            
            if (eax_4 == 0)
                esi_5 = nullptr
            else
                esi_5 = sub_461ad3(eax_4, arg1, eax_3, hObject, arg3 & 1, arg3 u>> 1 & 1)
            
            if (esi_5 != 0)
                sub_4610aa(esi_5)
                *arg4 = esi_5
                result = 0
            else
                CloseHandle(hObject)
                DeleteFileW(arg2)
                j__free(eax_3)
                result = 0x8007000e
        else
            j__free(eax_3)
            result = 0x8876038f
    else
        result = 0x8007000e
else
    char var_10c[0x103]
    boost::math::tools::evaluate_rational<4,double,double,double>(&var_10c, arg2, 0x104)
    char var_9_1 = 0
    result = sub_461b67(arg1, &var_10c, arg3, arg4)

sub_745f2b(__security_cookie_1)
return result
