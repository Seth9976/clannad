// 函数: sub_69b7e0
// 地址: 0x69b7e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = data_4ebe378

if (esi != 0 && *esi != 0)
    void* esi_1 = &esi[4]
    
    do
        int32_t* ecx_1 = *esi_1
        
        if (ecx_1 != 0)
            (*(*ecx_1 + 8))(ecx_1)
        
        int32_t eax_2 = *(esi_1 + 0x10)
        *esi_1 = 0
        eax_2(0)
        esi_1 += 0x24
    while (*(esi_1 - 0x10) != 0)

int32_t* i = data_4ecd158

for (int32_t ecx_2 = data_4ecd15c; i u< ecx_2; i = &i[1])
    void* eax = *i
    
    if (eax != 0)
        (*(eax + 0x1c))(0)
        ecx_2 = data_4ecd15c

if (data_4ebe350 == 0)
    return 

if (data_4ebe358 != 0)
    sub_69b890(&data_4ebe350)
    data_4ebe358 = 0

int32_t* ecx_3 = data_4ebe374

if (ecx_3 != 0)
    (*(*ecx_3 + 8))(ecx_3)

DeleteCriticalSection(&data_4ebe35c)
data_4ebe350 = 0
