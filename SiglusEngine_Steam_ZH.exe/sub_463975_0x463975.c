// 函数: sub_463975
// 地址: 0x463975
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t edi
int32_t var_130 = edi
int32_t* result

if (sub_4078b6() != 0)
    HANDLE eax_1 = CreateFileW(arg1, 0x80000000, FILE_SHARE_READ, nullptr, OPEN_EXISTING, 
        SECURITY_ANONYMOUS, nullptr)
    
    if (eax_1 != 0xffffffff)
        uint32_t fileSizeHigh
        uint32_t eax_2 = GetFileSize(eax_1, &fileSizeHigh)
        
        if (eax_2 != 0xffffffff)
            uint32_t fileSizeHigh_1 = fileSizeHigh
            
            if (fileSizeHigh_1 s<= 0 && (fileSizeHigh_1 s< 0 || eax_2 u< 0x20))
                goto label_463a1a
            
            HANDLE eax_3 = CreateFileMappingA(eax_1, nullptr, PAGE_READONLY, 0, 0, nullptr)
            
            if (eax_3 == 0xffffffff)
                goto label_463a1a
            
            struct MEMORY_MAPPED_VIEW_ADDRESS lpBaseAddress =
                MapViewOfFile(eax_3, FILE_MAP_READ, 0, 0, 0)
            int32_t* result_2
            
            if (lpBaseAddress != 0)
                void*** eax_4 = sub_745f3f(0x54)
                int32_t* esi_2
                
                if (eax_4 == 0)
                    esi_2 = nullptr
                else
                    esi_2 = sub_462606(eax_4, arg2, eax_1, eax_3, lpBaseAddress, eax_2)
                
                if (esi_2 == 0)
                    UnmapViewOfFile(lpBaseAddress)
                    result_2 = 0x8007000e
                    goto label_463aac
                
                int32_t* result_1 = sub_46275d(esi_2)
                
                if (result_1 s< 0)
                    (*(*esi_2 + 8))(esi_2)
                    result = result_1
                else
                    result_1 = sub_4636e2(esi_2)
                    
                    if (result_1 s< 0)
                        (*(*esi_2 + 8))(esi_2)
                        result = result_1
                    else
                        result_1 = sub_46339e(esi_2)
                        
                        if (result_1 s>= 0)
                            *arg3 = esi_2
                            result = nullptr
                        else
                            (*(*esi_2 + 8))(esi_2)
                            result = result_1
            else
                result_2 = 0x8876038f
            label_463aac:
                CloseHandle(eax_3)
                CloseHandle(eax_1)
                result = result_2
        else
        label_463a1a:
            CloseHandle(eax_1)
            result = 0x8876038f
    else
        result = 0x88760389
else
    char var_10c[0x103]
    boost::math::tools::evaluate_rational<4,double,double,double>(&var_10c, arg1, 0x104)
    char var_9_1 = 0
    result = sub_463860(&var_10c, arg2, arg3)

sub_745f2b(__security_cookie_1)
return result
