// 函数: sub_1a99a6d
// 地址: 0x1a99a6d
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

void* esi = sub_1a91fb2(0x480)

if (esi == 0)
    sub_1a931cd(0x1b)

data_1c08ec0 = esi
data_1c08ffc = 0x20

for (void* i = esi + 0x480; esi u< i; i = data_1c08ec0 + 0x480)
    *(esi + 4) = 0
    *esi = 0xffffffff
    *(esi + 8) = 0
    *(esi + 5) = 0xa
    esi += 0x24

STARTUPINFOA startupInfo
GetStartupInfoA(&startupInfo)

if (startupInfo.cbReserved2 != 0)
    BYTE* lpReserved2 = startupInfo.lpReserved2
    
    if (lpReserved2 != 0)
        int32_t i_1 = *lpReserved2
        void* ebx_1 = &lpReserved2[4]
        void* var_8_1 = ebx_1 + i_1
        
        if (i_1 s>= 0x800)
            i_1 = 0x800
        
        if (data_1c08ffc s< i_1)
            void* esi_1 = &data_1c08ec4
            
            do
                void* eax_3 = sub_1a91fb2(0x480)
                
                if (eax_3 == 0)
                    i_1 = data_1c08ffc
                    break
                
                data_1c08ffc += 0x20
                *esi_1 = eax_3
                
                for (void* j = eax_3 + 0x480; eax_3 u< j; j = *esi_1 + 0x480)
                    *(eax_3 + 4) = 0
                    *eax_3 = 0xffffffff
                    *(eax_3 + 8) = 0
                    *(eax_3 + 5) = 0xa
                    eax_3 += 0x24
                
                esi_1 += 4
            while (data_1c08ffc s< i_1)
        
        int32_t esi_2 = 0
        
        if (i_1 s> 0)
            do
                HANDLE hFile_1 = *var_8_1
                
                if (hFile_1 != 0xffffffff)
                    void* eax_4
                    eax_4.b = *ebx_1
                    
                    if ((eax_4.b & 1) != 0)
                        enum FILE_TYPE eax_5
                        
                        if ((eax_4.b & 8) == 0)
                            eax_5 = GetFileType(hFile_1)
                        
                        if ((eax_4.b & 8) != 0 || eax_5 != FILE_TYPE_UNKNOWN)
                            int32_t* eax_9 = (&data_1c08ec0)[esi_2 s>> 5] + (esi_2 & 0x1f) * 0x24
                            *eax_9 = *var_8_1
                            int32_t ecx_8
                            ecx_8.b = *ebx_1
                            eax_9[1].b = ecx_8.b
                
                var_8_1 += 4
                esi_2 += 1
                ebx_1 += 1
            while (esi_2 s< i_1)

for (int32_t i_2 = 0; i_2 s< 3; i_2 += 1)
    int32_t ecx_9 = data_1c08ec0
    int32_t eax_10 = i_2 * 9
    int32_t* esi_3 = ecx_9 + (eax_10 << 2)
    
    if (*(ecx_9 + (eax_10 << 2)) != 0xffffffff)
        esi_3[1].b |= 0x80
    else
        esi_3[1].b = 0x81
        enum STD_HANDLE nStdHandle
        
        if (i_2 != 0)
            int32_t eax_13 = neg.d(i_2 - 1)
            nStdHandle = sbb.d(eax_13, eax_13, i_2 != 1) - 0xb
        else
            nStdHandle = STD_INPUT_HANDLE
        
        HANDLE hFile = GetStdHandle(nStdHandle)
        
        if (hFile == 0xffffffff)
            esi_3[1].b |= 0x40
        else
            enum FILE_TYPE eax_15 = GetFileType(hFile)
            
            if (eax_15 == FILE_TYPE_UNKNOWN)
                esi_3[1].b |= 0x40
            else
                int32_t eax_16 = eax_15 & 0xff
                *esi_3 = hFile
                
                if (eax_16 == 2)
                    esi_3[1].b |= 0x40
                else if (eax_16 == 3)
                    esi_3[1].b |= 8

return SetHandleCount(data_1c08ffc)
