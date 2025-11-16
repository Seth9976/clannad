// 函数: sub_460d01
// 地址: 0x460d01
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t edi
int32_t var_128 = edi
int32_t result

if (sub_4078b6() != 0)
    HANDLE eax_1 = CreateFileW(arg1, 0x80000000, FILE_SHARE_READ, nullptr, OPEN_EXISTING, 
        SECURITY_ANONYMOUS, nullptr)
    
    if (eax_1 != 0xffffffff)
        uint32_t eax_2 = GetFileSize(eax_1, nullptr)
        HANDLE eax_3
        
        if (eax_2 != 0xffffffff)
            eax_3 = CreateFileMappingA(eax_1, nullptr, PAGE_READONLY, 0, 0, nullptr)
        
        if (eax_2 == 0xffffffff || eax_3 == 0xffffffff)
            CloseHandle(eax_1)
            result = 0x8876038f
        else
            struct MEMORY_MAPPED_VIEW_ADDRESS lpBaseAddress =
                MapViewOfFile(eax_3, FILE_MAP_READ, 0, 0, 0)
            int32_t result_1
            
            if (lpBaseAddress != 0)
                void*** eax_4 = sub_745f3f(0x24)
                void*** edi_3
                
                if (eax_4 == 0)
                    edi_3 = nullptr
                else
                    edi_3 = sub_4837f5(eax_4, eax_1, eax_3, lpBaseAddress, eax_2)
                
                if (edi_3 == 0)
                    UnmapViewOfFile(lpBaseAddress)
                    result_1 = 0x8007000e
                    goto label_460e14
                
                void*** eax_6 = sub_745f3f(0x30)
                void*** eax_7
                
                if (eax_6 == 0)
                    eax_7 = nullptr
                else
                    eax_7 = sub_460951(eax_6, arg2, edi_3)
                
                *arg3 = eax_7
                
                if (eax_7 != 0)
                    result = 0
                else
                    (**edi_3)(1)
                    result = 0x8007000e
            else
                result_1 = 0x8876038f
            label_460e14:
                CloseHandle(eax_3)
                CloseHandle(eax_1)
                result = result_1
    else
        result = 0x88760389
else
    char var_10c[0x103]
    boost::math::tools::evaluate_rational<4,double,double,double>(&var_10c, arg1, 0x104)
    char var_9_1 = 0
    result = sub_460c06(&var_10c, arg2, arg3)

sub_745f2b(__security_cookie_1)
return result
