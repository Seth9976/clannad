// 函数: sub_5c4c40
// 地址: 0x5c4c40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (data_4ecd150 == 0)
    return 

int32_t ecx_1 = data_4ecd15c

for (int32_t* i = data_4ecd158; i u< ecx_1; i = &i[1])
    void* eax_1 = *i
    
    if (eax_1 != 0)
        int32_t* edi_1 = *(eax_1 + 0x10)
        int32_t eax_2 = *edi_1
        
        if (eax_2 != 0)
            int32_t* eax_3 = DecodePointer(eax_2)
            (*(*eax_3 + 8))(eax_3)
            *edi_1 = 0
            ecx_1 = data_4ecd15c

DeleteCriticalSection(&data_4ecd160)
data_4ecd150 = 0
