
set(THRIFT_SCRIPT
    schedule_protocol.thrift)

if(UNIX)

foreach(script ${THRIFT_SCRIPT})
  exec_program(thrift ${PROJECT_SOURCE_DIR}/src/schedule_server/protocol/meta/
      ARGS "-I ${GLOBAL_META_DIR} -out ../ --gen cpp ${script}")
endforeach(script)

endif(UNIX)

