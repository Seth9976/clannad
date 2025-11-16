// 函数: sub_4cd600
// 地址: 0x4cd600
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char* eax_2 = arg2
char* var_218 = eax_2

if (eax_2 != 0)
    if (*(arg3 + 8) != 0 || *(arg3 + 0x1c) != 0)
        sub_4cd820(arg3)
        eax_2 = var_218
    
    uint32_t edi_1
    
    if (arg6 != 0)
        edi_1 = arg5
        *(arg3 + 4) = 1
    label_4cd66a:
        
        if (arg7 == 2)
            edi_1 = 0x20
    else
        *(arg3 + 4) = 0
        
        if (arg7 != 1)
            edi_1 = 0x2800
            goto label_4cd66a
        
        edi_1 = arg7 + 0x4b
    
    void fileName
    sub_4cfd70(&fileName, eax_2)
    HANDLE eax_3 = CreateFileA(&fileName, 0x80000000, FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr, 
        OPEN_EXISTING, 0x8000080, nullptr)
    *(arg3 + 0x24) = eax_3
    
    if (eax_3 != 0xffffffff)
        void* eax_5
        int32_t ecx_2
        eax_5, ecx_2 = sub_4c4c20(arg3 + 0xc, arg3 + 8, eax_3, arg3 + 0xc, "PCMstruct", arg4, edi_1)
        
        if (eax_5 s> 0)
            int32_t var_228_2 = ecx_2
            int32_t eax_6 = sub_4cd270(eax_5, arg3, var_218, arg4, eax_5, arg7, arg8)
            
            if (eax_6 != 0)
                sub_4cfe90(eax_6, arg3 + 0x20, arg3 + 0x1c, var_218, "WAVE_NAME")
                
                if (*arg3 == 1)
                    sub_4c4c20(arg3 + 0x5c, arg3 + 0x58, *(arg3 + 0x24), arg3 + 0x5c, "NWAtable", 
                        arg4 + 0x2c, *(arg3 + 0x3c) << 2)
                
                if (arg6 != 0 && arg7 == 0)
                    void* edi_4 = eax_5 - *(arg3 + 0x28) + arg4
                    
                    if (*(arg3 + 0x14) u> edi_4)
                        *(arg3 + 0x14) = edi_4
                
                bool cond:2 = *(arg3 + 4) == 0
                *(arg3 + 0x18) = divu.dp.d(0:(*(arg3 + 0x14)), zx.d(*(arg3 + 0x2e)) u>> 3)
                
                if (not(cond:2))
                    HANDLE hObject = *(arg3 + 0x24)
                    
                    if (hObject != 0xffffffff)
                        CloseHandle(hObject)
                        *(arg3 + 0x24) = 0xffffffff
                
                sub_5f02dd(eax_1 ^ &__saved_ebp)
                return 1
            
            sub_4cd820(arg3)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 0
