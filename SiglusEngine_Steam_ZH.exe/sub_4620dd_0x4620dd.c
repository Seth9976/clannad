// 函数: sub_4620dd
// 地址: 0x4620dd
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
char* eax_2 = arg2
int32_t edi
int32_t var_228 = edi
void* edi_1 = &eax_2[1]
char i

do
    i = *eax_2
    eax_2 = &eax_2[1]
while (i != 0)
int32_t eax_4 = sub_745f3f(eax_2 - edi_1 + 1)
int32_t result

if (eax_4 != 0)
    int32_t esi_1
    int32_t edi_4
    edi_4, esi_1 = __builtin_memcpy(eax_4, arg2, (eax_2 - edi_1 + 1) u>> 2 << 2)
    __builtin_memcpy(edi_4, esi_1, (eax_2 - edi_1 + 1) & 3)
    HANDLE hObject =
        CreateFileA(arg2, 0x40000000, FILE_SHARE_NONE, nullptr, CREATE_ALWAYS, 0x8000080, nullptr)
    
    if (hObject != 0xffffffff)
        uint8_t var_204[0xf8]
        
        if (GetTempPathA(0xf6, &var_204) == 0)
            goto label_462213
        
        uint8_t var_10c[0x104]
        
        if (GetTempFileNameA(&var_204, &data_ac3bc4, 0, &var_10c) == 0)
            goto label_462213
        
        HANDLE hObject_1 = CreateFileA(&var_10c, 0xc0000000, FILE_SHARE_NONE, nullptr, 
            CREATE_ALWAYS, 0xc000100, nullptr)
        int32_t result_2
        
        if (hObject_1 == 0xffffffff)
            result_2 = 0x88760395
            goto label_46221e
        
        void*** esi_2
        
        if ((arg3 & 2) == 0)
            void*** eax_11 = sub_745f3f(0x50)
            
            if (eax_11 == 0)
                esi_2 = nullptr
            else
                esi_2 = sub_461f25(eax_11, arg1, eax_4, hObject, hObject_1, arg3)
            
            if (esi_2 == 0)
                goto label_4622c1
            
        label_462317:
            int32_t result_1 = sub_460670(esi_2)
            
            if (result_1 s>= 0)
                *arg4 = esi_2
                result = 0
            else
                if (esi_2 != 0)
                    (*esi_2)[6](1)
                
                DeleteFileA(arg2)
                result = result_1
        else
            if (GetTempFileNameA(&var_204, &data_ac3bc4, 0, &var_10c) != 0)
                HANDLE hObject_2 = CreateFileA(&var_10c, 0xc0000000, FILE_SHARE_NONE, nullptr, 
                    CREATE_ALWAYS, 0xc000100, nullptr)
                
                if (hObject_2 == 0xffffffff)
                    CloseHandle(hObject_1)
                    result_2 = 0x88760395
                    goto label_46221e
                
                void*** eax_9 = sub_745f3f(0x50)
                
                if (eax_9 == 0)
                    esi_2 = nullptr
                else
                    esi_2 = sub_461fff(eax_9, arg1, eax_4, hObject_2, hObject_1, hObject, arg3)
                
                if (esi_2 != 0)
                    goto label_462317
                
                CloseHandle(hObject_2)
            label_4622c1:
                CloseHandle(hObject)
                CloseHandle(hObject_1)
                result_2 = 0x8007000e
            else
                CloseHandle(hObject_1)
            label_462213:
                result_2 = 0x80004005
            label_46221e:
                CloseHandle(hObject)
            
            DeleteFileA(arg2)
            j__free(eax_4)
            result = result_2
    else
        j__free(eax_4)
        result = 0x8876038f
else
    result = 0x8007000e

sub_745f2b(__security_cookie_1)
return result
