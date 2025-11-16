// 函数: sub_48560a
// 地址: 0x48560a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t esi = arg1
int32_t edi
int32_t var_c8 = edi

if ((*(esi + 0x48) & 0x80) == 0)
    uint32_t fileSizeHigh_2
    uint32_t eax_1 = GetFileSize(*(esi + 0x30), &fileSizeHigh_2)
    *(esi + 0x40) = eax_1
    *(esi + 0x44) = fileSizeHigh_2
    uint32_t fileSizeHigh
    uint32_t eax_3 = GetFileSize(*(esi + 0x34), &fileSizeHigh)
    int32_t var_bc = 0x40
    sub_48517c(&var_bc)
    SYSTEM_INFO systemInfo
    GetSystemInfo(&systemInfo)
    int32_t var_ac
    int32_t var_a8
    uint32_t eax_5 = var_ac u>> 3 | var_a8 << 0x1d
    uint32_t ecx_2 = var_a8 u>> 3
    uint32_t var_ac_1 = eax_5
    uint32_t var_a8_1 = ecx_2
    
    if (ecx_2 != 0 || eax_5 u> 0xffffffff)
        eax_5 = 0xffffffff
        int32_t var_ac_2 = 0xffffffff
        int32_t var_a8_2 = 0
    
    uint32_t fileSizeHigh_3 = fileSizeHigh
    
    if (fileSizeHigh_3 s<= 0 && (fileSizeHigh_3 s< 0 || eax_3 u< eax_5))
        eax_5 = eax_3
    
    uint32_t dwSize_1 = (divu.dp.d(0:eax_5, systemInfo.dwPageSize) + 1) * systemInfo.dwPageSize
    uint32_t nNumberOfBytesToRead = dwSize_1
    uint8_t* eax_7 = VirtualAlloc(nullptr, dwSize_1, MEM_COMMIT, PAGE_READWRITE)
    uint8_t* var_10_1 = eax_7
    
    if (eax_7 != 0)
    label_485717:
        int32_t ebx_3 = 0
        int32_t ecx_4
        
        if (*(esi + 0x20) u<= 0)
        label_485741:
            int32_t buffer = 0xffffffff
            int32_t var_30_1 = 0xffffffff
            uint32_t numberOfBytesWritten
            BOOL eax_16
            int32_t ecx_5
            eax_16, ecx_5 = WriteFile(*(esi + 0x30), &buffer, 8, &numberOfBytesWritten, nullptr)
            
            if (eax_16 != 0)
                int32_t i = 0
                
                if (*(esi + 0x20) u> 0)
                    do
                        uint32_t eax_19
                        eax_19, ecx_4 = (*(**(*(esi + 0x2c) + (i << 2)) + 4))(1)
                        arg1 = eax_19
                        
                        if (eax_19 s< 0)
                            goto label_48588c
                        
                        i += 1
                    while (i u< *(esi + 0x20))
                
                uint32_t fileSizeHigh_1
                uint32_t buffer_1 = GetFileSize(*(esi + 0x30), &fileSizeHigh_1)
                uint32_t buffer_2 = buffer_1
                buffer_1 -= eax_1
                fileSizeHigh_1 = sbb.d(fileSizeHigh_1, fileSizeHigh_2, buffer_2 u< eax_1)
                sub_485159(0, *(esi + 0x34), 0, 0, FILE_BEGIN)
                int32_t ecx_9
                BOOL i_1
                
                do
                    BOOL eax_24
                    int32_t ecx_8
                    eax_24, ecx_8 =
                        ReadFile(*(esi + 0x34), var_10_1, nNumberOfBytesToRead, &arg1, nullptr)
                    
                    if (eax_24 == 0)
                        sub_485159(ecx_8, *(esi + 0x30), eax_1, fileSizeHigh_2, FILE_BEGIN)
                        sub_485159(SetEndOfFile(*(esi + 0x30)), *(esi + 0x34), 0, 0, FILE_END)
                        VirtualFree(var_10_1, 0, MEM_RELEASE)
                        arg1 = 0x88760395
                        goto label_485848
                    
                    if (arg1 == 0)
                        sub_485159(VirtualFree(var_10_1, 0, MEM_RELEASE), *(esi + 0x30), 0x10, 0, 
                            FILE_BEGIN)
                        BOOL eax_27
                        int32_t ecx_12
                        eax_27, ecx_12 =
                            WriteFile(*(esi + 0x30), esi + 0x40, 8, &numberOfBytesWritten, nullptr)
                        BOOL eax_28
                        
                        if (eax_27 != 0)
                            eax_28, ecx_12 = WriteFile(*(esi + 0x30), &buffer_1, 8, 
                                &numberOfBytesWritten, nullptr)
                        
                        if (eax_27 == 0 || eax_28 == 0)
                            sub_485159(ecx_12, *(esi + 0x30), eax_1, fileSizeHigh_2, FILE_BEGIN)
                            SetEndOfFile(*(esi + 0x30))
                            arg1 = 0x8876038f
                        else if ((*(esi + 0x48) & 2) == 0)
                            *(esi + 0x48) |= 0x80
                            arg1 = 0
                        else
                            void var_7c
                            sub_482e9f(&var_7c)
                            void* eax_29
                            int32_t ecx_15
                            eax_29, ecx_15 = sub_482f46(&var_7c)
                            
                            if (eax_29 != 0)
                                sub_485159(ecx_15, *(esi + 0x30), 0, 0, FILE_BEGIN)
                                uint32_t eax_30
                                int32_t ecx_17
                                eax_30, ecx_17 = sub_482ffe(&var_7c, *(esi + 0x30), *(esi + 0x38))
                                arg1 = eax_30
                                
                                if (eax_30 s>= 0)
                                    sub_482ebe(&var_7c)
                                    *(esi + 0x48) |= 0x80
                                    arg1 = 0
                                else
                                    sub_485159(ecx_17, *(esi + 0x30), eax_1, fileSizeHigh_2, 
                                        FILE_BEGIN)
                                    sub_485159(SetEndOfFile(*(esi + 0x30)), *(esi + 0x38), 0, 0, 
                                        FILE_BEGIN)
                                    SetEndOfFile(*(esi + 0x38))
                                    sub_482ebe(&var_7c)
                            else
                                sub_485159(ecx_15, *(esi + 0x30), eax_1, fileSizeHigh_2, FILE_BEGIN)
                                SetEndOfFile(*(esi + 0x30))
                                arg1 = 0x8007000e
                                sub_482ebe(&var_7c)
                        
                        goto label_485848
                    
                    i_1, ecx_9 =
                        WriteFile(*(esi + 0x30), var_10_1, arg1, &numberOfBytesWritten, nullptr)
                while (i_1 != 0)
                sub_485159(ecx_9, *(esi + 0x30), eax_1, fileSizeHigh_2, FILE_BEGIN)
                sub_485159(SetEndOfFile(*(esi + 0x30)), *(esi + 0x34), 0, 0, FILE_END)
            else
                sub_485159(ecx_5, *(esi + 0x30), eax_1, fileSizeHigh_2, FILE_BEGIN)
                SetEndOfFile(*(esi + 0x30))
            
            VirtualFree(var_10_1, 0, MEM_RELEASE)
            arg1 = 0x8007000e
        else
            while (true)
                uint32_t eax_15
                eax_15, ecx_4 = (*(**(*(esi + 0x2c) + (ebx_3 << 2)) + 4))(0)
                arg1 = eax_15
                
                if (eax_15 s< 0)
                label_48588c:
                    sub_485159(ecx_4, *(esi + 0x30), eax_1, fileSizeHigh_2, FILE_BEGIN)
                    SetEndOfFile(*(esi + 0x30))
                    VirtualFree(var_10_1, 0, MEM_RELEASE)
                    break
                
                ebx_3 += 1
                
                if (ebx_3 u>= *(esi + 0x20))
                    goto label_485741
    else
        for (; dwSize_1 != systemInfo.dwPageSize; dwSize_1 = nNumberOfBytesToRead)
            uint32_t dwSize =
                (divu.dp.d(0:(dwSize_1 u>> 1), systemInfo.dwPageSize) + 1) * systemInfo.dwPageSize
            nNumberOfBytesToRead = dwSize
            uint8_t* eax_12 = VirtualAlloc(nullptr, dwSize, MEM_COMMIT, PAGE_READWRITE)
            var_10_1 = eax_12
            
            if (eax_12 != 0)
                goto label_485717
        
        arg1 = 0x8007000e
else
    arg1 = 0x88760384

label_485848:
HANDLE hObject = *(esi + 0x30)

if (hObject != 0xffffffff)
    CloseHandle(hObject)
    *(esi + 0x30) = 0xffffffff

HANDLE hObject_1 = *(esi + 0x38)

if (hObject_1 != 0xffffffff)
    CloseHandle(hObject_1)
    *(esi + 0x38) = 0xffffffff

HANDLE hObject_2 = *(esi + 0x34)

if (hObject_2 != 0xffffffff)
    CloseHandle(hObject_2)
    *(esi + 0x34) = 0xffffffff

return arg1
