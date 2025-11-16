// 函数: sub_467c7d
// 地址: 0x467c7d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg1
char ecx = esi[2].b
void* result = *esi
uint32_t ebx_1 = arg3 u>> 8
int32_t edi
int32_t var_10 = edi
arg1:3.b = ebx_1.b

if (ecx == 0)
    ecx = *(esi + 9)
    
    if (ecx == 8)
        char* ecx_2 = arg2 + result
        void* edi_1 = ecx_2 + result
        
        if ((arg4 & 0x80) != 0)
            if (result u> 1)
                arg2 = result - 1
                void* i
                
                do
                    ecx_2 -= 1
                    *(edi_1 - 1) = arg3.b
                    void* ebx_2
                    ebx_2.b = *ecx_2
                    edi_1 -= 2
                    i = arg2
                    arg2 -= 1
                    *edi_1 = ebx_2.b
                while (i != 1)
            
            *(edi_1 - 1) = arg3.b
        else if (result u> 0)
            arg2 = result
            void* i_1
            
            do
                ecx_2 -= 1
                ebx_1.b = *ecx_2
                *(edi_1 - 1) = ebx_1.b
                edi_1 -= 2
                i_1 = arg2
                arg2 -= 1
                *edi_1 = arg3.b
            while (i_1 != 1)
        
        *(esi + 0xa) = 2
        *(esi + 0xb) = 0x10
        result *= 2
        esi[1] = result
    else if (ecx == 0x10)
        if ((arg4 & 0x80) == 0)
            void* edi_7 = result + arg2
            arg2 = edi_7
            void* edi_8 = edi_7 + result
            
            if (result u> 0)
                arg4.d = result
                int32_t i_2
                
                do
                    void* ecx_10
                    ecx_10.b = *(arg2 - 1)
                    arg2 -= 2
                    *(edi_8 - 1) = ecx_10.b
                    void* ecx_11
                    ecx_11.b = *arg2
                    *(edi_8 - 2) = ecx_11.b
                    *(edi_8 - 3) = ebx_1.b
                    edi_8 -= 4
                    i_2 = arg4.d
                    arg4.d -= 1
                    *edi_8 = arg3.b
                while (i_2 != 1)
        else
            void* ecx_4 = arg2 + result
            arg4.d = ecx_4
            void* ecx_5 = ecx_4 + result
            
            if (result u> 1)
                arg2 = result - 1
                void* edi_5 = arg4.d
                void* i_3
                
                do
                    *(ecx_5 - 1) = ebx_1.b
                    *(ecx_5 - 2) = arg3.b
                    ebx_1.b = *(edi_5 - 1)
                    *(ecx_5 - 3) = ebx_1.b
                    edi_5 -= 2
                    ebx_1.b = *edi_5
                    ecx_5 -= 4
                    i_3 = arg2
                    arg2 -= 1
                    *ecx_5 = ebx_1.b
                    ebx_1.b = arg1:3.b
                while (i_3 != 1)
            
            *(ecx_5 - 1) = ebx_1.b
            *(ecx_5 - 2) = arg3.b
        
        *(esi + 0xa) = 2
        *(esi + 0xb) = 0x20
        result <<= 2
        esi[1] = result
else if (ecx == 2)
    ecx = *(esi + 9)
    
    if (ecx == 8)
        char* edi_13 = result * 3 + arg2
        char* ecx_13 = edi_13 + result
        
        if ((arg4 & 0x80) != 0)
            if (result u> 1)
                arg2 = result - 1
                void* i_4
                
                do
                    *(ecx_13 - 1) = arg3.b
                    void* ebx_3
                    ebx_3.b = *(edi_13 - 1)
                    *(ecx_13 - 2) = ebx_3.b
                    ebx_3.b = *(edi_13 - 2)
                    edi_13 -= 3
                    *(ecx_13 - 3) = ebx_3.b
                    ebx_3.b = *edi_13
                    ecx_13 -= 4
                    i_4 = arg2
                    arg2 -= 1
                    *ecx_13 = ebx_3.b
                while (i_4 != 1)
            
            ecx_13[0xffffffff] = arg3.b
        else if (result u> 0)
            arg2 = result
            void* i_5
            
            do
                ebx_1.b = *(edi_13 - 1)
                *(ecx_13 - 1) = ebx_1.b
                ebx_1.b = *(edi_13 - 2)
                *(ecx_13 - 2) = ebx_1.b
                edi_13 -= 3
                ebx_1.b = *edi_13
                *(ecx_13 - 3) = ebx_1.b
                ecx_13 -= 4
                i_5 = arg2
                arg2 -= 1
                *ecx_13 = arg3.b
            while (i_5 != 1)
        
        *(esi + 0xb) = 0x20
        result <<= 2
        *(esi + 0xa) = 4
        esi[1] = result
    else if (ecx == 0x10)
        if ((arg4 & 0x80) == 0)
            char* ecx_31 = result * 3 + arg2
            void* edi_25 = ecx_31 + result
            
            if (result u> 0)
                arg2 = result
                void* i_6
                
                do
                    ebx_1.b = *(ecx_31 - 1)
                    *(edi_25 - 1) = ebx_1.b
                    ebx_1.b = *(ecx_31 - 2)
                    *(edi_25 - 2) = ebx_1.b
                    ebx_1.b = *(ecx_31 - 3)
                    *(edi_25 - 3) = ebx_1.b
                    ebx_1.b = *(ecx_31 - 4)
                    *(edi_25 - 4) = ebx_1.b
                    ebx_1.b = *(ecx_31 - 5)
                    *(edi_25 - 5) = ebx_1.b
                    ecx_31 -= 6
                    ebx_1.b = *ecx_31
                    *(edi_25 - 6) = ebx_1.b
                    ebx_1.b = arg1:3.b
                    *(edi_25 - 7) = ebx_1.b
                    edi_25 -= 8
                    i_6 = arg2
                    arg2 -= 1
                    *edi_25 = arg3.b
                while (i_6 != 1)
        else
            char* edi_19 = result * 3 + arg2
            char* ecx_21 = edi_19 + result
            
            if (result u> 1)
                arg2 = result - 1
                void* i_7
                
                do
                    ebx_1.b = arg1:3.b
                    *(ecx_21 - 1) = ebx_1.b
                    *(ecx_21 - 2) = arg3.b
                    ebx_1.b = *(edi_19 - 1)
                    *(ecx_21 - 3) = ebx_1.b
                    ebx_1.b = *(edi_19 - 2)
                    *(ecx_21 - 4) = ebx_1.b
                    ebx_1.b = *(edi_19 - 3)
                    *(ecx_21 - 5) = ebx_1.b
                    ebx_1.b = *(edi_19 - 4)
                    *(ecx_21 - 6) = ebx_1.b
                    ebx_1.b = *(edi_19 - 5)
                    edi_19 -= 6
                    *(ecx_21 - 7) = ebx_1.b
                    ebx_1.b = *edi_19
                    ecx_21 -= 8
                    i_7 = arg2
                    arg2 -= 1
                    *ecx_21 = ebx_1.b
                while (i_7 != 1)
                ebx_1.b = arg1:3.b
            
            *(ecx_21 - 1) = ebx_1.b
            ecx_21[0xfffffffe] = arg3.b
        
        *(esi + 0xb) = 0x40
        result <<= 3
        *(esi + 0xa) = 4
        esi[1] = result

return result
