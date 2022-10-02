FROM gcc:4.9 as builder
COPY src/hello-docker /usr/src/hello-docker
WORKDIR /usr/src/hello-docker
RUN gcc -o hello-docker hello-docker.c

FROM ubuntu:latest
WORKDIR /root/
COPY --from=builder /usr/src/hello-docker/hello-docker ./

CMD ["./hello-docker"]
