// 函数: sub_462351
// 地址: 0x462351
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t edi
int32_t var_228 = edi
uint32_t esi = (_wcslen(arg2) + 1) * 2
int32_t eax_4 = sub_745f3f(esi)
int32_t result

if (eax_4 != 0)
    int32_t esi_2
    int32_t edi_3
    edi_3, esi_2 = __builtin_memcpy(eax_4, arg2, esi u>> 2 << 2)
    __builtin_memcpy(edi_3, esi_2, esi & 3)
    HANDLE hObject =
        CreateFileW(arg2, 0x40000000, FILE_SHARE_NONE, nullptr, CREATE_ALWAYS, 0x8000080, nullptr)
    
    if (hObject != 0xffffffff)
        uint8_t var_204[0xf8]
        
        if (GetTempPathA(0xf6, &var_204) == 0)
            goto label_46248f
        
        uint8_t var_10c[0x104]
        
        if (GetTempFileNameA(&var_204, &data_ac3bc4, 0, &var_10c) == 0)
            goto label_46248f
        
        HANDLE hObject_1 = CreateFileA(&var_10c, 0xc0000000, FILE_SHARE_NONE, nullptr, 
            CREATE_ALWAYS, 0xc000100, nullptr)
        int32_t result_2
        
        if (hObject_1 == 0xffffffff)
            result_2 = 0x88760395
            goto label_46249a
        
        void*** esi_3
        
        if ((arg3 & 2) == 0)
            void*** eax_11 = sub_745f3f(0x50)
            
            if (eax_11 == 0)
                esi_3 = nullptr
            else
                esi_3 = sub_461f91(eax_11, arg1, eax_4, hObject, hObject_1, arg3)
            
            if (esi_3 == 0)
                goto label_46253b
            
        label_462591:
            int32_t result_1 = sub_460670(esi_3)
            
            if (result_1 s>= 0)
                *arg4 = esi_3
                result = 0
            else
                if (esi_3 != 0)
                    (*esi_3)[6](1)
                
                DeleteFileW(arg2)
                result = result_1
        else
            if (GetTempFileNameA(&var_204, &data_ac3bc4, 0, &var_10c) != 0)
                HANDLE hObject_2 = CreateFileA(&var_10c, 0xc0000000, FILE_SHARE_NONE, nullptr, 
                    CREATE_ALWAYS, 0xc000100, nullptr)
                
                if (hObject_2 == 0xffffffff)
                    CloseHandle(hObject_1)
                    result_2 = 0x88760395
                    goto label_46249a
                
                void*** eax_9 = sub_745f3f(0x50)
                
                if (eax_9 == 0)
                    esi_3 = nullptr
                else
                    esi_3 = sub_46206d(eax_9, arg1, eax_4, hObject_2, hObject_1, hObject, arg3)
                
                if (esi_3 != 0)
                    goto label_462591
                
                CloseHandle(hObject_2)
            label_46253b:
                CloseHandle(hObject)
                CloseHandle(hObject_1)
                result_2 = 0x8007000e
            else
                CloseHandle(hObject_1)
            label_46248f:
                result_2 = 0x80004005
            label_46249a:
                CloseHandle(hObject)
            
            DeleteFileW(arg2)
            j__free(eax_4)
            result = result_2
    else
        j__free(eax_4)
        result = 0x8876038f
else
    result = 0x8007000e

sub_745f2b(__security_cookie_1)
return result
