// 函数: sub_4066bb
// 地址: 0x4066bb
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char var_78[0x14]
sub_41cfcf(&var_78)
int32_t* arg_4
int32_t* eax = arg_4
int32_t result

if (eax != 0)
    int32_t* arg_10
    int32_t* ebx_1 = arg_10
    
    if (ebx_1 != 0)
        int32_t edi
        int32_t var_d8_1 = edi
        void var_64
        (*(*eax + 0x30))(eax, &var_64)
        void var_44
        (*(*ebx_1 + 0x30))(ebx_1, &var_44)
        int32_t var_58
        int32_t var_38
        
        if (zx.d(arg5.w) == 5 || arg6 != 0)
        label_406828:
            int32_t eax_11 = 1
            
            if (arg_4 == ebx_1)
                eax_11 = 0x10001
            
            int32_t var_cc
            int32_t result_1 = sub_41d1a3(&var_78, &var_cc, ebx_1, arg3, arg4, 0, eax_11)
            
            if (result_1 s>= 0)
                int32_t var_c8
                int32_t var_c4
                void var_a4
                result_1 =
                    sub_4060ab(arg_4, arg1, arg2, var_cc, var_c8, var_c4, arg3, &var_a4, arg5, arg6)
                
                if (result_1 s< 0)
                    result = result_1
                else if (var_38 != 0 || var_58 == 0)
                    result = 0
                else
                    (*(*ebx_1 + 0xc))(ebx_1, &arg_4)
                    int32_t* eax_13 = arg_4
                    int32_t eax_14 = (*(*eax_13 + 0xc))(eax_13)
                    int32_t* eax_15 = arg_4
                    (*(*eax_15 + 8))(eax_15)
                    
                    result = eax_14 == 0 ? 0 : 0x88760868
            else
                result = result_1
        else
            int32_t* esi_1 = arg1
            int32_t* edi_1 = arg3
            
            if (esi_1 != edi_1)
                if (esi_1 == 0 || edi_1 == 0)
                    goto label_406828
                
                int32_t i = 0x100
                bool cond:1_1 = false
                
                while (i != 0)
                    int32_t temp1_1 = *esi_1
                    int32_t temp2_1 = *edi_1
                    cond:1_1 = temp1_1 != temp2_1
                    esi_1 = &esi_1[1]
                    edi_1 = &edi_1[1]
                    i -= 1
                    
                    if (temp1_1 != temp2_1)
                        break
                
                if (cond:1_1)
                    goto label_406828
            
            int32_t var_14
            int32_t var_10
            int32_t var_8
            int32_t edx_1
            int32_t esi_7
            
            if (arg2 == 0)
                int32_t var_4c
                edx_1 = var_4c
                int32_t var_48
                esi_7 = var_48
                var_14 = 0
                var_10 = 0
                int32_t var_c_1 = edx_1
                var_8 = esi_7
            else
                var_14 = *arg2
                int32_t* edi_2 = &var_10
                void* esi_3 = &arg2[1]
                *edi_2 = *esi_3
                void* edi_3 = &edi_2[1]
                void* esi_4 = esi_3 + 4
                *edi_3 = *esi_4
                *(edi_3 + 4) = *(esi_4 + 4)
                int32_t var_c
                edx_1 = var_c
                esi_7 = var_8
            
            int32_t var_24
            int32_t var_20
            int32_t eax_4
            int32_t ecx_2
            int32_t var_18
            
            if (arg4 == 0)
                int32_t var_28
                ecx_2 = var_28
                var_24 = 0
                var_20 = 0
                int32_t var_2c
                eax_4 = var_2c
                int32_t var_1c_1 = eax_4
                var_18 = ecx_2
            else
                var_24 = *arg4
                int32_t* edi_6 = &var_20
                void* esi_9 = &arg4[1]
                *edi_6 = *esi_9
                void* edi_7 = &edi_6[1]
                void* esi_10 = esi_9 + 4
                *edi_7 = *esi_10
                *(edi_7 + 4) = *(esi_10 + 4)
                ecx_2 = var_18
                int32_t var_1c
                eax_4 = var_1c
                esi_7 = var_8
            
            if (edx_1 - var_14 != eax_4 - var_24 || esi_7 - var_10 != ecx_2 - var_20)
                goto label_406828
            
            (*(*ebx_1 + 0xc))(ebx_1, &arg_10)
            sub_416380(1)
            int32_t esi_14 = 0x80004005
            
            if (var_58 == 0)
                if (var_38 == 0)
                    int32_t* eax_7 = arg_10
                    esi_14 = (*(*eax_7 + 0x88))(eax_7, ebx_1, &var_24, arg_4, &var_14, 0)
                else if (var_38 == 2)
                    int32_t* eax_9 = arg_10
                    esi_14 = (*(*eax_9 + 0x78))(eax_9, ebx_1, &var_24, arg_4, &var_14)
            
            sub_416380(0)
            int32_t* eax_10 = arg_10
            (*(*eax_10 + 8))(eax_10)
            
            if (esi_14 s< 0)
                goto label_406828
            
            result = 0
    else
        result = 0x8876086c
else
    result = 0x8876086c

j_sub_41d0c1(&var_78)
return result
