// 函数: sub_4cbe60
// 地址: 0x4cbe60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

WaitForSingleObject(data_702788, 0xffffffff)
int32_t i_1 = 0
void* edi = &data_20af854
int32_t i

do
    int32_t ebx_1 = 0
    
    for (int32_t j = 0; j s< 7; j += 1)
        if (*(edi + (j << 2) + 0x18) != 0)
            void* eax_3 = j * 0x28 + 0xfffffffc + edi
            void* ebx_2 = eax_3 + 0x54
            
            if (*(eax_3 + 0x5c) != 0xff)
                int32_t eax_4 = *(ebx_2 + 0x24)
                int32_t ecx_1
                
                if (eax_4 == 1)
                    ecx_1 = data_1392710
                else if (eax_4 == 2)
                    ecx_1 = data_1392ccc
                else
                    ecx_1 = data_131310c
                
                *(ebx_2 + 0x1c) += ecx_1 - *(ebx_2 + 0x18)
                int32_t edx_1 = *(ebx_2 + 0x1c)
                *(ebx_2 + 0x18) = ecx_1
                sub_4d1fd0(ebx_2, edx_1)
            
            int32_t eax_9 = *(eax_3 + 0x58)
            int32_t ecx_3 = *ebx_2
            
            if (eax_9 != ecx_3)
                *(edi + (j << 2) + 0x34) = eax_9
                ebx_1 = 1
            else
                if (j == 5)
                    ebx_1 = j - 3
                
                if (j != 5 || *(edi + 0x118) != 0)
                    ebx_1 = 1
                
                *(edi + (j << 2) + 0x34) = ecx_3
                *(edi + (j << 2) + 0x18) = 0
    
    if (ebx_1 != 0)
        sub_4cbc80(i_1)
    
    if (ebx_1 == 2)
        if (*(edi - 4) == 3)
            int32_t* eax_10 = *(edi + 0xc)
            (*(*eax_10 + 0x24))(eax_10)
        
        *(edi + 0x48) = 0xff
        
        if (*(edi + 0x1a0) == 0)
            *(edi - 4) = 1
        else
            int32_t* ecx_6 = *(edi + 4)
            
            if (ecx_6 != 0)
                (*(*ecx_6 + 0x4c))(ecx_6, 0)
                int32_t* eax_12 = *(edi + 4)
                (*(*eax_12 + 0x74))(eax_12, 0)
                int32_t* eax_13 = *(edi + 4)
                (*(*eax_13 + 8))(eax_13)
            
            int32_t* ecx_9 = *(edi + 0x14)
            
            if (ecx_9 != 0)
                (*(*ecx_9 + 8))(ecx_9)
            
            int32_t* ecx_10 = *(edi + 0x10)
            
            if (ecx_10 != 0)
                (*(*ecx_10 + 8))(ecx_10)
            
            int32_t* ecx_11 = *(edi + 0xc)
            
            if (ecx_11 != 0)
                (*(*ecx_11 + 8))(ecx_11)
            
            int32_t* ecx_12 = *(edi + 8)
            
            if (ecx_12 != 0)
                (*(*ecx_12 + 8))(ecx_12)
            
            int32_t* ecx_13 = *edi
            
            if (ecx_13 != 0)
                (*(*ecx_13 + 8))(ecx_13)
            
            *(edi - 4) = 0
            *(edi + 0x19c) = 0
            __builtin_memset(edi, 0, 0x18)
            *(edi + 0x48) = 0xff
            *(edi + 0x16c) = 0
            *(edi + 0x1a0) = 0
            *(edi + 0x1b4) = 0
    
    i = i_1 + 1
    edi += 0x3c0
    i_1 = i
while (i s< 0x40)
return ReleaseSemaphore(data_702788, 1, nullptr)
