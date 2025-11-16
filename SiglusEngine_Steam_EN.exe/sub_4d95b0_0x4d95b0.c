// 函数: sub_4d95b0
// 地址: 0x4d95b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_20f3460 == 0)
    return 

int32_t ecx_1 = data_20f346c

for (int32_t* i = data_20f3468; i u< ecx_1; i = &i[1])
    void* eax_1 = *i
    
    if (eax_1 != 0)
        int32_t* edi_1 = *(eax_1 + 0x10)
        int32_t eax_2 = *edi_1
        
        if (eax_2 != 0)
            int32_t* eax_3 = DecodePointer(eax_2)
            (*(*eax_3 + 8))(eax_3)
            *edi_1 = 0
            ecx_1 = data_20f346c

DeleteCriticalSection(&data_20f3470)
data_20f3460 = 0
