// 函数: sub_6ae560
// 地址: 0x6ae560
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = arg1[4]
int32_t edx = 0

if (edi s<= 0)
    return 

do
    int32_t* eax = arg1[5]
    int32_t* esi_1
    
    if (eax u< 8)
        esi_1 = arg1
    else
        esi_1 = *arg1
    
    if (0x61 u<= *(esi_1 + (edx << 1)))
        int32_t* esi_2
        
        if (eax u< 8)
            esi_2 = arg1
        else
            esi_2 = *arg1
        
        if (*(esi_2 + (edx << 1)) u<= 0x7a)
            if (eax u< 8)
                eax = arg1
            else
                eax = *arg1
            
            *(eax + (edx << 1)) -= 0x20
    
    edx += 1
while (edx s< edi)
