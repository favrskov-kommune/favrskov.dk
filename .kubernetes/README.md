# Kubernetes Drupal setup

## Install Azure File Share

```bash
# Add secret with Storage Account credentials
kubectl create secret generic azure-storage-secret --namespace favrskovdk --type=Opaque \
    --from-literal azurestorageaccountname="<ACCOUNT-NAME>" \
    --from-literal azurestorageaccountkey="<ACCESS-KEY>"
```

```bash
# Add secret with Premium Storage Account credentials
kubectl create secret generic azure-premium-storage-secret --namespace favrskovdk --type=Opaque \
    --from-literal azurestorageaccountname="<ACCOUNT-NAME>" \
    --from-literal azurestorageaccountkey="<ACCESS-KEY>"
```

## Install Cert Manager for SSL cert renewal

```bash
kubectl apply -f https://github.com/jetstack/cert-manager/releases/download/v1.1.0/cert-manager.yaml
kubectl apply -f ./cluster/cert-manager
```

Remember to change mail in `./cluster/cert-manager/00-cluster-issuer.yml`.
Errors in renewal will be sent to this email.

## Install Traefik Proxy

```bash
kubectl apply -f ./cluster/traefik-proxy
```

Permanent HTTP to HTTPS redirect (301) is enabled, may be disabled in `./cluster/traefik-proxy/03-daemon-set.yml`.
