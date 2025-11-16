// 函数: sub_4c43b0
// 地址: 0x4c43b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* i_4 = arg3
int32_t* i_5 = i_4
void var_41c
sub_4c36f0(arg2, arg4, arg2, arg5, &var_41c)
int32_t var_588 = arg6
void* var_58c = &var_41c
void fileName
sub_4c84d0(&fileName, "%s\%s")
void* i_3 = nullptr
WIN32_FIND_DATAA findFileData
HANDLE hFindFile = FindFirstFileA(&fileName, &findFileData)

if (hFindFile == 0xffffffff)
    goto label_4c46af

void* esi_1 = 0x100000
void* var_570_1 = 0x100000
void* ebx_1 = nullptr
sub_4d6960(hFindFile, i_4 + 0x10, i_4 + 0xc, 0x100000, "FILELIST_NAMEBUF")

while (true)
    if ((findFileData.dwFileAttributes.b & 0x10) != 0)
        i_4 = i_3
    else
        void* edx_2 = nullptr
        var_530
        void* eax_3 = &var_530
        
        if (findFileData.cFileName[0] != 0)
            do
                char ecx_3 = *eax_3
                
                if (ecx_3 u< 0x80)
                    edx_2 += 1
                    eax_3 += 1
                else if (ecx_3 u< 0xa0)
                    if (ecx_3 u>= 0xfe)
                        edx_2 += 1
                        eax_3 += 1
                    else
                        edx_2 += 2
                        eax_3 += 2
                else if (ecx_3 u<= 0xdf || ecx_3 u>= 0xfe)
                    edx_2 += 1
                    eax_3 += 1
                else
                    edx_2 += 2
                    eax_3 += 2
            while (*eax_3 != 0)
        
        void* eax_5 = (edx_2 + 1) * 3 + ebx_1
        
        if (esi_1 s< eax_5)
            var_570_1 = esi_1 + 0x100000
            sub_4d6ae0(eax_5, &i_5[4], &i_5[3], esi_1 + 0x100000)
        
        int32_t* esi_4 = i_5[4] + ebx_1
        sub_5f6260(esi_4, &var_530, edx_2 + 1)
        void* esi_5 = esi_4 + edx_2 + 1
        sub_5f6260(esi_5, &var_530, edx_2 + 1)
        void* ecx_7 = esi_5
        
        if (esi_5 != 0)
            while (true)
                char eax_6 = *ecx_7
                
                if (eax_6 u>= 0x80 && (eax_6 u< 0xa0 || eax_6 u> 0xdf) && eax_6 u< 0xfe)
                    ecx_7 += 2
                    continue
                
                if (eax_6 == 0)
                    break
                
                if (eax_6 u>= 0x41 && eax_6 u<= 0x5a)
                    *ecx_7 = eax_6 + 0x20
                
                ecx_7 += 1
        
        void* esi_6 = esi_5 + edx_2 + 1
        sub_5f6260(esi_6, &var_530, edx_2 + 1)
        
        if (esi_6 != 0)
            while (true)
                char eax_7 = *esi_6
                
                if (eax_7 u>= 0x80 && (eax_7 u< 0xa0 || eax_7 u> 0xdf) && eax_7 u< 0xfe)
                    esi_6 += 2
                    continue
                
                if (eax_7 == 0)
                    break
                
                if (eax_7 u>= 0x61 && eax_7 u<= 0x7a)
                    *esi_6 = eax_7 - 0x20
                
                esi_6 += 1
        
        ebx_1 = eax_5
        i_4 = i_3 + 1
        esi_1 = var_570_1
        i_3 = i_4
    
    if (FindNextFileA(hFindFile, &findFileData) == 0)
        break

BOOL eax_9 = FindClose(hFindFile)
void* i_2

if (i_4 s<= 0)
    i_4 = i_5
label_4c46af:
    sub_4d6c40(i_4, i_4 + 4)
    sub_4d6c40(&i_5[3], i_4 + 0x10)
    *(i_4 + 4) = 0
    i_5[3] = 0
    *(i_4 + 0x10) = 0
    *i_5 = 0
    i_5[2] = 0
    i_2 = nullptr
else
    sub_4d6ae0(eax_9, &i_5[4], &i_5[3], ebx_1)
    void* ebx_4 = &i_5[1]
    int32_t eax_11 = i_4 << 4
    sub_4d6960(eax_11, ebx_4, i_5, eax_11, "FILELIST")
    int32_t* i_6 = i_5
    i_2 = i_3
    char* esi_8 = i_5[4]
    i_6[2] = i_4
    void* edi_3 = *ebx_4
    
    if (i_2 s> 0)
        void* i_1 = i_2
        void* i
        
        do
            int32_t edx_6 = 0
            char* eax_12 = esi_8
            
            if (esi_8 != 0)
                if (*esi_8 != 0)
                    do
                        i_6.b = *eax_12
                        
                        if (i_6.b u< 0x80)
                            edx_6 += 1
                            eax_12 = &eax_12[1]
                        else if (i_6.b u< 0xa0)
                            if (i_6.b u>= 0xfe)
                                edx_6 += 1
                                eax_12 = &eax_12[1]
                            else
                                edx_6 += 2
                                eax_12 = &eax_12[2]
                        else if (i_6.b u<= 0xdf || i_6.b u>= 0xfe)
                            edx_6 += 1
                            eax_12 = &eax_12[1]
                        else
                            edx_6 += 2
                            eax_12 = &eax_12[2]
                    while (*eax_12 != 0)
                
                edx_6 += 1
            
            *(edi_3 + 4) = esi_8
            void* esi_9 = &esi_8[edx_6]
            *(edi_3 + 8) = esi_9
            void* esi_10 = esi_9 + edx_6
            *(edi_3 + 0xc) = esi_10
            esi_8 = esi_10 + edx_6
            *edi_3 = edx_6
            edi_3 += 0x10
            i = i_1
            i_1 -= 1
        while (i != 1)
        i_2 = i_3
        i_6 = i_5
    
    char* edx_7 = *ebx_4
    
    if (edx_7 != 0)
        int32_t ecx_10 = i_6[2]
        
        if (ecx_10 s> 0)
            sub_5f02f0(edx_7, ecx_10, 0x10, sub_4c47e0)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return i_3

sub_5f02dd(eax_1 ^ &__saved_ebp)
return i_2
