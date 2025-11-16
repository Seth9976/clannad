// 函数: sub_6d3740
// 地址: 0x6d3740
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = arg3
int32_t* var_c = edi
int32_t i_5 = *edi
int32_t i_6 = i_5

if (edi[2].b != 3)
    return 

arg1.b = *(edi + 9)

if (arg1.b u< 8)
    uint32_t eax = zx.d(arg1.b)
    
    if (eax == 1)
        void* ebx_9 = ((i_5 - 1) u>> 3) + arg2
        void* edx_5 = 7 - ((i_5 - 1) & 7)
        
        if (i_5 != 0)
            void* edi_3 = arg2 - 1 + i_5
            int32_t i
            
            do
                arg1.b = *ebx_9
                arg3.b = edx_5.b
                arg1.b u>>= arg3.b
                arg1.b &= 1
                *edi_3 = arg1.b
                
                if (edx_5 != 7)
                    edx_5 += 1
                else
                    edx_5 = nullptr
                    ebx_9 -= 1
                
                edi_3 -= 1
                i = i_5
                i_5 -= 1
            while (i != 1)
            i_5 = i_6
            edi = var_c
    else if (eax == 2)
        void* ebx_6 = ((i_5 - 1) u>> 2) + arg2
        int32_t edx_4 = (3 - ((i_5 - 1) & 3)) * 2
        
        if (i_5 != 0)
            char* edi_2 = arg2 - 1 + i_5
            int32_t i_1
            
            do
                arg1.b = *ebx_6
                arg3.b = edx_4.b
                arg1.b u>>= arg3.b
                arg1.b &= 3
                *edi_2 = arg1.b
                
                if (edx_4 != 6)
                    edx_4 += 2
                else
                    edx_4 = 0
                    ebx_6 -= 1
                
                edi_2 -= 1
                i_1 = i_5
                i_5 -= 1
            while (i_1 != 1)
            i_5 = i_6
            edi = var_c
    else if (eax == 4)
        char* ebx_3 = ((i_5 - 1) u>> 1) + arg2
        int32_t edx_2 = (i_5 & 1) << 2
        
        if (i_5 != 0)
            char* edi_1 = arg2 - 1 + i_5
            int32_t i_2
            
            do
                arg1.b = *ebx_3
                arg3.b = edx_2.b
                arg1.b u>>= arg3.b
                arg1.b &= 0xf
                *edi_1 = arg1.b
                
                if (edx_2 != 4)
                    edx_2 += 4
                else
                    edx_2 = 0
                    ebx_3 -= 1
                
                edi_1 -= 1
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)
            i_5 = i_6
            edi = var_c
    
    *(edi + 9) = 8
    *(edi + 0xb) = 8
    edi[1] = i_5

if (*(edi + 9) != 8)
    return 

int32_t ecx = arg6
void* ebx_11 = arg2 - 1 + i_5

if (ecx s> 0)
    int32_t eax_10 = i_5 << 2
    void* edx_7 = arg2 - 1 + eax_10
    
    if (i_5 != 0)
        int32_t i_3
        
        do
            uint32_t eax_11 = zx.d(*ebx_11)
            
            if (eax_11 s< ecx)
                eax_11.b = *(eax_11 + arg5)
                *edx_7 = eax_11.b
            else
                *edx_7 = 0xff
            
            *(edx_7 - 1) = *(zx.d(*ebx_11) * 3 + arg4 + 2)
            *(edx_7 - 2) = *(zx.d(*ebx_11) * 3 + arg4 + 1)
            uint32_t ecx_3 = zx.d(*ebx_11)
            ebx_11 -= 1
            ecx = arg6
            *(edx_7 - 3) = *(ecx_3 * 3 + arg4)
            edx_7 -= 4
            i_3 = i_5
            i_5 -= 1
        while (i_3 != 1)
        edi = var_c
    
    edi[2] = 0x20040806
    edi[1] = eax_10
    return 

arg1 = i_5 * 3
void* edx_9 = arg2 - 1 + arg1

if (i_5 != 0)
    int32_t i_4
    
    do
        uint32_t ecx_4 = zx.d(*ebx_11)
        edx_9 -= 3
        ebx_11 -= 1
        *(edx_9 + 3) = *(ecx_4 * 3 + arg4 + 2)
        *(edx_9 + 2) = *(zx.d(*(ebx_11 + 1)) * 3 + arg4 + 1)
        *(edx_9 + 1) = *(zx.d(*(ebx_11 + 1)) * 3 + arg4)
        i_4 = i_5
        i_5 -= 1
    while (i_4 != 1)
    edi = var_c

edi[2] = 0x18030802
edi[1] = arg1
